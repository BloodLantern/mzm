#include "data/sprites/piston.h"
#include "macros.h"

const u32 sPistonGfx[179] = INCBIN_U32("data/sprites/Piston.gfx.lz");
const u16 sPistonPAL[16] = INCBIN_U16("data/sprites/Piston.pal");

const u16 sPistonOam_Idle_Frame0[34] = {
    0xb,
    OBJ_SHAPE_HORIZONTAL | 0xa8, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xd0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    0xe0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1e8, OBJ_SPRITE_OAM | 0x237,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x215
};

const u16 sPistonOam_Idle_Frame1[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0xa8, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xd0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1e8, OBJ_SPRITE_OAM | 0x237,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x215
};

const u16 sPistonOam_Idle_Frame3[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0xa8, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xd0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xf0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1e8, OBJ_SPRITE_OAM | 0x237,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x8, OBJ_SPRITE_OAM | 0x215
};

const u16 sPistonOam_Frame_Unused[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0xa9, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xb1, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xc1, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xd1, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xe1, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xe9, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xf1, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf9, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1e7, OBJ_SPRITE_OAM | 0x237,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x9, OBJ_SPRITE_OAM | 0x215
};

const u16 sPistonOam_Opening_Frame0[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0xa4, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xac, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xbc, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xcc, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xe4, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xec, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf4, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x1e8, OBJ_SPRITE_OAM | 0x235,
    OBJ_SHAPE_HORIZONTAL | 0xf2, 0x8, OBJ_SPRITE_OAM | 0x217
};

const u16 sPistonOam_Opening_Frame1[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0xa0, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc8, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xe0, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe8, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xf0, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xec, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x213,
    0xec, OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x219
};

const u16 sPistonOam_Opening_Frame2[37] = {
    0xc,
    OBJ_SHAPE_HORIZONTAL | 0x9c, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc4, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd4, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xdc, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe4, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xec, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xea, OBJ_SIZE_16x16 | 0x1e8, OBJ_SPRITE_OAM | 0x211,
    0xea, OBJ_SIZE_16x16 | 0x8, OBJ_SPRITE_OAM | 0x21b
};

const u16 sPistonOam_Opening_Frame3[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x97, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0x9f, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xaf, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xbf, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xcf, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xd7, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xdf, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe7, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe3, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xeb, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe3, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xeb, 0xd, OBJ_SPRITE_OAM | 0x21d
};

const u16 sPistonOam_Opening_Frame4[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x98, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1f8, OBJ_SPRITE_OAM | 0x20e,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe4, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe4, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xec, 0xd, OBJ_SPRITE_OAM | 0x21d
};

const u16 sPistonOam_Opening_Frame5[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x98, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1f8, OBJ_SPRITE_OAM | 0x20c,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe4, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe4, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xec, 0xd, OBJ_SPRITE_OAM | 0x21d
};

const u16 sPistonOam_Opening_Frame6[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x98, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1f8, OBJ_SPRITE_OAM | 0x206,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe4, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe4, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xec, 0xd, OBJ_SPRITE_OAM | 0x21d
};

const u16 sPistonOam_Opening_Frame7[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x98, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1f8, OBJ_SPRITE_OAM | 0x22c,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe4, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe4, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xec, 0xd, OBJ_SPRITE_OAM | 0x21d
};

const u16 sPistonOam_Opened_Frame0[43] = {
    0xe,
    OBJ_SHAPE_HORIZONTAL | 0x98, 0x1f8, OBJ_SPRITE_OAM | 0x21e,
    0xa0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x200,
    0xb0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x202,
    0xc0, OBJ_SIZE_16x16 | 0x1f8, OBJ_SPRITE_OAM | 0x204,
    OBJ_SHAPE_HORIZONTAL | 0xd0, 0x1f8, OBJ_SPRITE_OAM | 0x22e,
    OBJ_SHAPE_HORIZONTAL | 0xd8, 0x1f8, OBJ_SPRITE_OAM | 0x226,
    OBJ_SHAPE_HORIZONTAL | 0xe0, OBJ_SIZE_32x8 | 0x1f0, OBJ_SPRITE_OAM | 0x208,
    OBJ_SHAPE_HORIZONTAL | 0xe8, 0x1f8, OBJ_SPRITE_OAM | 0x229,
    0xf8, 0x1e8, OBJ_SPRITE_OAM | 0x228,
    0xf8, 0x10, OBJ_SPRITE_OAM | 0x22b,
    0xe4, 0x1f0, OBJ_SPRITE_OAM | 0x23e,
    OBJ_SHAPE_VERTICAL | 0xec, 0x1eb, OBJ_SPRITE_OAM | 0x210,
    0xe4, 0x8, OBJ_SPRITE_OAM | 0x23f,
    OBJ_SHAPE_VERTICAL | 0xec, 0xd, OBJ_SPRITE_OAM | 0x21d
};


const struct FrameData sPistonOam_Idle[5] = {
    sPistonOam_Idle_Frame0,
    0x10,
    sPistonOam_Idle_Frame1,
    0x10,
    sPistonOam_Idle_Frame0,
    0x10,
    sPistonOam_Idle_Frame3,
    0x10,
    NULL,
    0x0
};

const struct FrameData sPistonOam_Opening[9] = {
    sPistonOam_Opening_Frame0,
    0x6,
    sPistonOam_Opening_Frame1,
    0x6,
    sPistonOam_Opening_Frame2,
    0x6,
    sPistonOam_Opening_Frame3,
    0x6,
    sPistonOam_Opening_Frame4,
    0x6,
    sPistonOam_Opening_Frame5,
    0x6,
    sPistonOam_Opening_Frame6,
    0x6,
    sPistonOam_Opening_Frame7,
    0x6,
    NULL,
    0x0
};

const struct FrameData sPistonOam_Opened[2] = {
    sPistonOam_Opened_Frame0,
    0xFF,
    NULL,
    0x0
};
