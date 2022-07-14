#include "clipdata.h"
#include "globals.h"

void clipdate_setup_code(void)
{

}

/**
 * @brief Gets information on the clipdata block at the position in parameters, only used for samus
 * 
 * @param y_position Y position (in sub-pixels)
 * @param x_position X position (in sub-pixels)
 * @return u32 Clipdata type (including solid flag)
 */
u32 clipdata_process_for_samus(u16 y_position, u16 x_position)
{
    struct CollisionData collision;
    u32 result;

    // Get tile position
    collision.tile_y = y_position >> 0x6;
    collision.tile_x = x_position >> 0x6;

    if (collision.tile_x >= bg_pointers_and_dimensions.clipdata_width)
        result = CLIPDATA_TYPE_SOLID_FLAG | CLIPDATA_TYPE_SOLID;
    else
    {        
        if (collision.tile_y < bg_pointers_and_dimensions.clipdata_height)
        {
            // Get clip type at position
            collision.clipdata_type = tilemap_and_clip_pointers.clip_collisions[bg_pointers_and_dimensions.clipdata_decompressed[bg_pointers_and_dimensions.clipdata_width * collision.tile_y + collision.tile_x]];
            // Get sub pixel
            collision.sub_pixel_y = y_position & 0x3F;
            collision.sub_pixel_x = x_position & 0x3F;
            collision.actor_type = CLIPDATA_ACTOR_SAMUS;
            result = clipdata_code_pointer(&collision);
        }
        else
            result = CLIPDATA_TYPE_AIR;
    }

    return result;
}

/**
 * @brief 57e7c | 100 | Processes the clipdata at the position (hazard, movement, destruction, modification...) and gets the type of said clipdata
 * 
 * @param y_position Y Position (subpixels)
 * @param x_position X Position (subpixels)
 * @return u32 Clipdata type (including solid flag)
 */
u32 clipdata_process(u16 y_position, u16 x_position)
{
    struct CollisionData collision;
    u32 clipdata;

    collision.tile_y = y_position >> 6;
    collision.tile_x = x_position >> 6;

    // Check in bounds
    if (collision.tile_x >= bg_pointers_and_dimensions.clipdata_width || collision.tile_y >= bg_pointers_and_dimensions.clipdata_height)
    {
        // Clear if out of bounds
        current_affecting_clipdata.movement = CLIPDATA_MOVEMENT_NONE;
        current_affecting_clipdata.hazard = HAZARD_TYPE_NONE;
        current_clipdata_affecting_action = CCAA_NONE;
        return CLIPDATA_TYPE_AIR;
    }
    else
    {
        if (current_clipdata_affecting_action == CCAA_NONE)
        {
            // No CCAA, then update current affecting
            collision.actor_type = CLIPDATA_ACTOR_SPRITE;
            current_affecting_clipdata.movement = CLIPDATA_MOVEMENT_NONE;
            current_affecting_clipdata.hazard = HAZARD_TYPE_NONE;
            clipdata_update_current_affecting(y_position, collision.tile_y, collision.tile_x, 0x2);
        }
        else if (current_clipdata_affecting_action >= CCAA_UNUSED)
        {
            // "Destructing" CCAA (projectiles, samus, bomb chain), then it's a non sprite
            collision.actor_type = CLIPDATA_ACTOR_NON_SPRITE;
            if (current_clipdata_affecting_action == CCAA_UNUSED)
                current_clipdata_affecting_action = CCAA_NONE;
        }
        else
            collision.actor_type = CLIPDATA_ACTOR_SPRITE;

        // Get clip at position
        clipdata = bg_pointers_and_dimensions.clipdata_decompressed[collision.tile_y * bg_pointers_and_dimensions.clipdata_width + collision.tile_x];
        if (current_clipdata_affecting_action != CCAA_NONE)
        {
            // Apply CCAA if none
            block_apply_ccaa(collision.tile_y, collision.tile_x, clipdata);
            current_clipdata_affecting_action = CCAA_NONE;
        }

        // Get type and sub pixel, then call clipdata code
        collision.clipdata_type = tilemap_and_clip_pointers.clip_collisions[clipdata];
        collision.sub_pixel_y = y_position & 0x3F;
        collision.sub_pixel_x = x_position & 0x3F;
        return clipdata = clipdata_code_pointer(&collision);
    }
}

/**
 * @brief 57f7c | 104 | Returns the collision type for the current position
 * 
 * @param pCollision Pointer to a collision data structure
 * @return u32 Clipdata type (including solid flag)
 */
u32 clipdata_convert_to_collision(struct CollisionData* pCollision)
{
    u32 result;

    result = CLIPDATA_TYPE_AIR;

    switch (pCollision->clipdata_type)
    {
        case CLIPDATA_TYPE_SOLID:
            // No calculations needed, return type and add solid flag
            result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            break;

        case CLIPDATA_TYPE_LEFT_STEEP_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // The slope forms a rectangle triangle with the right angle being in the bottom left
            // For the subpixels coordinates, 0,0 is the top left, and 3F,3F the bottom right
            // So in order to determine whether it's colliding with the solid part or not, we simply check if Y > X
            if (pCollision->sub_pixel_y >= pCollision->sub_pixel_x)
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;
            
        case CLIPDATA_TYPE_RIGHT_STEEP_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // Same logic, however since the slope is "flipped" in regards to the coordinates, we substract the X to 3F
            if (pCollision->sub_pixel_y >= 0x3F - pCollision->sub_pixel_x)
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_LEFT_UPPER_SLIGHT_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // Same logic, however the triangle hypotenuse is "larger" and extends on 2 block, with the angle being twice as big
            // Hence why the subpixel X is divided by 2, it's to compensate
            if (pCollision->sub_pixel_y >= pCollision->sub_pixel_x >> 1)
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_LEFT_LOWER_SLIGHT_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // Same logic, we add 0x3F because it's the lower part of the slope
            if (pCollision->sub_pixel_y >= (pCollision->sub_pixel_x + 0x3F) >> 1)
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_RIGHT_LOWER_SLIGHT_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // Same logic
            if (pCollision->sub_pixel_y >= 0x3F - (pCollision->sub_pixel_x >> 1))
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_RIGHT_UPPER_SLIGHT_FLOOR_SLOPE:
            // Checking if in the solid or air part of the slope
            // Same logic
            if (pCollision->sub_pixel_y >= (0x3F - pCollision->sub_pixel_x) >> 1)
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            else
                result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_AIR:
        case CLIPDATA_TYPE_PASS_THROUGH_BOTTOM:
            // No calculations needed, return type
            result = pCollision->clipdata_type;
            break;

        case CLIPDATA_TYPE_ENEMY_ONLY:
            if (pCollision->actor_type > CLIPDATA_ACTOR_NON_SPRITE)
            {
                // Only for sprites
                pCollision->clipdata_type = CLIPDATA_TYPE_AIR;
                result = CLIPDATA_TYPE_AIR;
            }
            else
            {
                // For non sprite
                pCollision->clipdata_type = CLIPDATA_TYPE_SOLID;
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            }
            break;

        case CLIPDATA_TYPE_DOOR:
            pCollision->clipdata_type = CLIPDATA_TYPE_SOLID;
            result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            break;

        case CLIPDATA_TYPE_STOP_ENEMY:
            if (pCollision->actor_type < CLIPDATA_ACTOR_SPRITE)
            {
                // For non sprite
                pCollision->clipdata_type = CLIPDATA_TYPE_AIR;
                result = CLIPDATA_TYPE_AIR;
            }
            else
            {
                // For sprite
                pCollision->clipdata_type = CLIPDATA_TYPE_SOLID;
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            }
            break;

        case CLIPDATA_TYPE_TANK:
            if (pCollision->actor_type == CLIPDATA_ACTOR_SAMUS)
            {
                pCollision->clipdata_type = CLIPDATA_TYPE_AIR;
                result = CLIPDATA_TYPE_AIR;
            }
            else
            {
                pCollision->clipdata_type = CLIPDATA_TYPE_SOLID;
                result = pCollision->clipdata_type | CLIPDATA_TYPE_SOLID_FLAG;
            }
            break;
    }

    return result;
}

/**
 * @brief 58080 | 40 | Checks for the current affecting clipdata (movement and hazard) at the position
 * 
 * @param y_position Y Position (subpixels)
 * @param x_position X Position (subpixels)
 * @return u32 Current affecting clipdata, first 16 bits are hazard, last 16 bits are movement
 */
u32 clipdata_check_current_affecting_at_position(u16 y_position, u16 x_position)
{
    u16 tile_y;
    u16 tile_x;

    current_affecting_clipdata.movement = CLIPDATA_MOVEMENT_NONE;
    current_affecting_clipdata.hazard = HAZARD_TYPE_NONE;

    tile_y = y_position >> 0x6;
    tile_x = x_position >> 0x6;

    if (tile_y >= bg_pointers_and_dimensions.clipdata_height || tile_x >= bg_pointers_and_dimensions.clipdata_width)
        return 0x0;
    else
        return clipdata_update_current_affecting(y_position, tile_y, tile_x, 0x0);
}

u32 clipdata_update_current_affecting(u16 y_position, u16 tile_y, u16 tile_x, u8 unk)
{

}

u8 clidpata_check_cant_use_elevator(void)
{

}

u32 clipdata_check_ground_effect(u16 y_position, u16 x_position)
{

}