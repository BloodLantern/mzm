#include "types.h"

#include "constants/connection.h"

#include "structs/connection.h"

/**
 * @brief 5790c | ac | Activates/deactivates the hatch for a gadora
 * 
 * @param xPosition X position
 * @param yPosition Y position
 * @param action Action (0 = Close, 1 = Open)
 * @return u32 Iterator
 */
u32 GadoraHatchUpdate(u16 xPosition, u16 yPosition, u8 action)
{
    i32 i;
    u32 exists;
    u8 found;
    i32 xOffset;
    i32 yOffset;

    // Get should the hatch exists or not
    if (action)
        exists = TRUE;
    else
        exists = FALSE;

    xOffset = 0;
    yOffset = 0;
    found = FALSE;

    for (i = 0; i < MAX_AMOUNT_OF_HATCHES; i++)
    {
        if (gHatchData[i].opening)
            continue;
        
        // Try find door at position
        if (gHatchData[i].xPosition + xOffset >= xPosition / BLOCK_SIZE && gHatchData[i].xPosition - xOffset <= xPosition / BLOCK_SIZE &&
            gHatchData[i].yPosition + 3 >= yPosition / BLOCK_SIZE && gHatchData[i].yPosition - yOffset <= yPosition / BLOCK_SIZE)
            found = TRUE;

        if (found)
        {
            // Apply exists status
            if (gHatchData[i].exists != exists)
                gHatchData[i].exists = exists;
            else
                found = FALSE;
            break;
        }
    }

    if (found)
        i++;
    else
        i = 0;

    return i;
}
