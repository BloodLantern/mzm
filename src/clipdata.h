#ifndef CLIPDATA_H
#define CLIPDATA_H

#include "types.h"
#include "block.h"
#include "gba.h"

#define behavior_to_block(behavior) (behavior - 0x10)
#define behavior_to_tank(behavior) (behavior - 0x34)
#define behavior_to_bldalpha(behavior) (behavior - 0x44)

// Globals

extern struct CurrentAffectingClip gCurrentAffectingClipdata;
extern struct TilemapAndClipPointers gTilemapAndClipPointers;

// Defines

#define MAX_AMOUNT_OF_CAA 16

#define CAA_NONE 0x0
#define CAA_REMOVE_SOLID 0x1
#define CAA_MAKE_SOLID_GRIPPABLE 0x2
#define CAA_MAKE_SOLID2 0x3
#define CAA_MAKE_SOLID3 0x4
#define CAA_BOMB_CHAIN_UNUSED 0x5
#define CAA_UNUSED 0x6
#define CAA_BEAM 0x7
#define CAA_BOMB_PISTOL 0x8
#define CAA_MISSILE 0x9
#define CAA_SUPER_MISSILE 0xA
#define CAA_POWER_BOMB 0xB
#define CAA_SPEEDBOOSTER 0xC
#define CAA_SPEEDBOOSTER_ON_GROUND 0xD
#define CAA_SCREW_ATTACK 0xE
#define CAA_BOMB_CHAIN 0xF

#define COLLISION_AIR 0x0
#define COLLISION_LEFT_SLIGHT_FLOOR_SLOPE 0x2
#define COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE 0x3
#define COLLISION_LEFT_STEEP_FLOOR_SLOPE 0x4
#define COLLISION_RIGHT_STEEP_FLOOR_SLOPE 0x5
#define COLLISION_PASS_THROUGH_BOTTOM 0x10
#define COLLISION_SOLID 0x11

#define CLIPDATA_MOVEMENT_NONE 0x0
#define CLIPDATA_MOVEMENT_ELEVATOR_DOWN_BLOCK 0x1
#define CLIPDATA_MOVEMENT_ELEVATOR_UP_BLOCK 0x2
#define CLIPDATA_MOVEMENT_NON_POWER_GRIP 0x6
#define CLIPDATA_MOVEMENT_STOP_ENEMY_BLOCK_SOLID 0x7
#define CLIPDATA_MOVEMENT_SPACE_PIRATE_ZONELINE 0x8
#define CLIPDATA_MOVEMENT_SPACE_PIRATE_WALLJUMP_POINT 0x9

#define HAZARD_TYPE_NONE 0x0
#define HAZARD_TYPE_WATER 0x1
#define HAZARD_TYPE_STRONG_LAVA 0x2
#define HAZARD_TYPE_WEAK_LAVA 0x3
#define HAZARD_TYPE_ACID 0x4
#define HAZARD_TYPE_HEAT 0x5
#define HAZARD_TYPE_SNOWFLAKES_KNOCKBACK 0x6
#define HAZARD_TYPE_COLD 0x7

#define GROUND_EFFECT_NONE 0x0
#define GROUND_EFFECT_WET_GROUND 0x1
#define GROUND_EFFECT_DUSTY_GROUND 0x2
#define GROUND_EFFECT_VERY_DUSTY_GROUND 0x3
#define GROUND_EFFECT_UNKNOWN 0x4
#define GROUND_EFFECT_BUBBLY_GROUND 0x5

#define CLIPDATA_ACTOR_SAMUS 0x0
#define CLIPDATA_ACTOR_NON_SPRITE 0x1
#define CLIPDATA_ACTOR_SPRITE 0x2

#define CLIPDATA_TYPE_AIR 0x0
#define CLIPDATA_TYPE_SOLID 0x1
#define CLIPDATA_TYPE_LEFT_STEEP_FLOOR_SLOPE 0x2
#define CLIPDATA_TYPE_RIGHT_STEEP_FLOOR_SLOPE 0x3
#define CLIPDATA_TYPE_LEFT_UPPER_SLIGHT_FLOOR_SLOPE 0x4
#define CLIPDATA_TYPE_LEFT_LOWER_SLIGHT_FLOOR_SLOPE 0x5
#define CLIPDATA_TYPE_RIGHT_LOWER_SLIGHT_FLOOR_SLOPE 0x6
#define CLIPDATA_TYPE_RIGHT_UPPER_SLIGHT_FLOOR_SLOPE 0x7
#define CLIPDATA_TYPE_ENEMY_ONLY 0x8
#define CLIPDATA_TYPE_STOP_ENEMY 0x9
#define CLIPDATA_TYPE_TANK 0xA
#define CLIPDATA_TYPE_DOOR 0xB
#define CLIPDATA_TYPE_PASS_THROUGH_BOTTOM 0xC
#define CLIPDATA_TYPE_SOLID_FLAG 0x1000000

#define CLIP_BEHAVIOR_AIR_SOLID 0x0
#define CLIP_BEHAVIOR_ELEVATOR_DOWN 0x1
#define CLIP_BEHAVIOR_ELEVATOR_UP 0x2
#define CLIP_BEHAVIOR_DOOR_TRANSITION 0x3
#define CLIP_BEHAVIOR_VERTICAL_UP_TRANSITION 0x4
#define CLIP_BEHAVIOR_VERTICAL_DOWN_TRANSITION 0x5
#define CLIP_BEHAVIOR_NON_POWER_GRIP 0x6
#define CLIP_BEHAVIOR_STOP_ENEMY_SOLID 0x7
#define CLIP_BEHAVIOR_SPACE_PIRATE_ZONELINE 0x8
#define CLIP_BEHAVIOR_SPACE_PIRATE_WALLJUMP_POINT 0x9
#define CLIP_BEHAVIOR_SHOT_BLOCK_NEVER_REFORM 0x10
#define CLIP_BEHAVIOR_TOP_LEFT_SHOT_BLOCK_NEVER_REFORM 0x11
#define CLIP_BEHAVIOR_TOP_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x12
#define CLIP_BEHAVIOR_BOTTOM_LEFT_SHOT_BLOCK_NEVER_REFORM 0x13
#define CLIP_BEHAVIOR_BOTTOM_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x14
#define CLIP_BEHAVIOR_SHOT_BLOCK_NO_REFORM 0x15
#define CLIP_BEHAVIOR_TOP_LEFT_SHOT_BLOCK_NO_REFORM 0x16
#define CLIP_BEHAVIOR_TOP_RIGHT_SHOT_BLOCK_NO_REFORM 0x17
#define CLIP_BEHAVIOR_BOTTOM_LEFT_SHOT_BLOCK_NO_REFORM 0x18
#define CLIP_BEHAVIOR_BOTTOM_RIGHT_SHOT_BLOCK_NO_REFORM 0x19
#define CLIP_BEHAVIOR_SHOT_BLOCK_REFORM 0x1A
#define CLIP_BEHAVIOR_BOMB_BLOCK_NEVER_REFORM 0x1B
#define CLIP_BEHAVIOR_BOMB_BLOCK_REFORM 0x1C
#define CLIP_BEHAVIOR_MISSILE_BLOCK_NEVER_REFORM 0x1D
#define CLIP_BEHAVIOR_MISSILE_BLOCK_NO_REFORM 0x1E
#define CLIP_BEHAVIOR_SUPER_MISSILE_BLOCK_NEVER_REFORM 0x1F
#define CLIP_BEHAVIOR_SUPER_MISSILE_BLOCK_NO_REFORM 0x20
#define CLIP_BEHAVIOR_SPEEDBOOST_BLOCK_NO_REFORM 0x21
#define CLIP_BEHAVIOR_SPEEDBOOST_BLOCK_REFORM 0x22
#define CLIP_BEHAVIOR_CRUMBLE_BLOCK 0x23
#define CLIP_BEHAVIOR_POWER_BOMB_BLOCK_NEVER_REFORM 0x24
#define CLIP_BEHAVIOR_SCREW_ATTACK_BLOCK_NO_REFORM 0x25
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN1 0x26
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN2 0x27
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN3 0x28
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN4 0x29
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN1 0x2A
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN2 0x2B
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN3 0x2C
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN4 0x2D
#define CLIP_BEHAVIOR_SLOW_CRUMBLE_BLOCK 0x2E
#define CLIP_BEHAVIOR_HIDDEN_ENERGY_TANK 0x34
#define CLIP_BEHAVIOR_HIDDEN_MISSILE_TANK 0x35
#define CLIP_BEHAVIOR_HIDDEN_SUPER_MISSILE_TANK 0x36
#define CLIP_BEHAVIOR_HIDDEN_POWER_BOMB_TANK 0x37
#define CLIP_BEHAVIOR_ENERGY_TANK 0x38
#define CLIP_BEHAVIOR_MISSILE_TANK 0x39
#define CLIP_BEHAVIOR_SUPER_MISSILE_TANK 0x3A
#define CLIP_BEHAVIOR_POWER_BOMB_TANK 0x3B
#define CLIP_BEHAVIOR_UNDERWATER_ENERGY_TANK 0x3C
#define CLIP_BEHAVIOR_UNDERWATER_MISSILE_TANK 0x3D
#define CLIP_BEHAVIOR_UNDERWATER_SUPER_MISSILE_TANK 0x3E
#define CLIP_BEHAVIOR_UNDERWATER_POWER_BOMB_TANK 0x3F
#define CLIP_BEHAVIOR_WATER 0x40
#define CLIP_BEHAVIOR_STRONG_LAVA 0x41
#define CLIP_BEHAVIOR_WEAK_LAVA 0x42
#define CLIP_BEHAVIOR_ACID 0x43
#define CLIP_BEHAVIOR_BG0_TRIGGER_OPAQUE 0x44
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL1 0x45
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL2 0x46
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL3 0x47
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL4 0x48
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL5 0x49
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_FULL 0x4A
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL1 0x4B
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL2 0x4C
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL3 0x4D
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL4 0x4E
#define CLIP_BEHAVIOR_BG0_TRIGGER_DEFAULT_TRANSPARENCY 0x4F
#define CLIP_BEHAVIOR_WET_GROUND 0x50
#define CLIP_BEHAVIOR_DUSTY_GROUND 0x51
#define CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED 0x52
#define CLIP_BEHAVIOR_BUBBLY_GROUND 0x53
#define CLIP_BEHAVIOR_VERY_DUSTY_GROUND 0x54
#define CLIP_BEHAVIOR_GRAY_DOOR 0x80
#define CLIP_BEHAVIOR_REGULAR_DOOR 0x81
#define CLIP_BEHAVIOR_MISSILE_DOOR 0x82
#define CLIP_BEHAVIOR_SUPER_MISSILE_DOOR 0x83
#define CLIP_BEHAVIOR_POWER_BOMB_DOOR 0x84

// Structs

struct CurrentAffectingClip {
    u16 movement;
    u16 hazard;
};

struct CollisionData {
    i32 clipdataType;
    i32 subPixelX;
    i32 subPixelY;
    i32 actorType;
    u16 tileX;
    u16 tileY;
};

struct TilemapAndClipPointers {
    u16* pTilemap;
    u8* pClipCollisions;
    u16* pClipBehaviors;
};

// Typedef

typedef u32 (*ClipFunc_T)(struct CollisionData*);

// Functions

void ClipdataSetupCode(void);
u32 ClipdataProcessForSamus(u16 yPosition, u16 xPosition);
u32 ClipdataProcess(u16 yPosition, u16 xPosition);
u32 ClipdataConvertToCollision(struct CollisionData* pCollision);
i32 ClipdataCheckCurrentAffectingAtPosition(u16 yPosition, u16 xPosition);
i32 ClipdataUpdateCurrentAffecting(u16 yPosition, u16 tileY, u16 tileX, u8 unk);
u8 ClipdataCheckCantUseElevator(void);
i32 ClipdataCheckGroundEffect(u16 yPosition, u16 xPosition);

#endif /* CLIPDATA_H */