
/* Addresses
$C029    - NEWVIDEO register
$E1/2000 - $9FFF SHR graphics buffer
*/


#include "standard_libs.h"
#include <peekpoke.h>
#include "8x8_chars.h"


uint8_t _apple2gs_text_color;

#define _SPACE_ {0,0,0,0,0,0,0,0}

const static uint8_t tiles[][8] =
{
    _SPACE_,
    _TILE_DIGIT_0,
    _TILE_DIGIT_1,
    _TILE_DIGIT_2,
    _TILE_DIGIT_3,
    _TILE_DIGIT_4,
    _TILE_DIGIT_5,
    _TILE_DIGIT_6,
    _TILE_DIGIT_7,
    _TILE_DIGIT_8,
    _TILE_DIGIT_9,
    _TILE_0_UDG,
    _TILE_1_UDG,
    _TILE_2_UDG,
    _TILE_3_UDG,
    _TILE_4_UDG,
    _TILE_5_UDG,
    _TILE_6_UDG,
    _TILE_A,
    _TILE_B,
    _TILE_C,
    _TILE_D,
    _TILE_E,
    _TILE_F,
    _TILE_G,
    _TILE_H,
    _TILE_I,
    _TILE_J,
    _TILE_K,
    _TILE_L,
    _TILE_M,
    _TILE_N,
    _TILE_O,
    _TILE_P,
    _TILE_Q,
    _TILE_R,
    _TILE_S,
    _TILE_T,
    _TILE_U,
    _TILE_V,
    _TILE_W,
    _TILE_X,
    _TILE_Y,
    _TILE_Z,
    _TILE_7_UDG, // 43
    _TILE_8_UDG,
    _TILE_9_UDG,
    _TILE_10_UDG,
    _TILE_11_UDG,
    _TILE_12_UDG,
    _TILE_13_UDG,
    _TILE_14_UDG,
    _TILE_15_UDG,
    _TILE_16_UDG,
    _TILE_17_UDG,
    _TILE_18_UDG,
    _TILE_19_UDG,
    _TILE_20_UDG,
    _TILE_21_UDG,
    _TILE_22_UDG,
    _TILE_23_UDG,
    _TILE_24_UDG,
    _TILE_25_UDG,
    _TILE_26_UDG,
    // {0x18,0x3e,0x60,0x3c,0x06,0x7c,0x18,0x00},
};

void shr_draw(uint8_t x, uint8_t y, uint8_t tile, uint8_t color)
{
}

void shr_delete(uint8_t x, uint8_t y)
{
}

void _XL_INIT_GRAPHICS(void)
{
    // SHR ON
    POKE(0xC029, 0xC1);
}
