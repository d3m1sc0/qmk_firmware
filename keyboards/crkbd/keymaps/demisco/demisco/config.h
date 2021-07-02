/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2

// default but important
#define TAPPING_TERM 200

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4


#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

/* OLED */
#ifdef OLED_DRIVER_ENABLE
#   define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
#endif


/* MOUSE */
// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL
// #define MOUSEKEY_DELAY      100
// #define MOUSEKEY_INTERVAL    10
// #define MOUSEKEY_MAX_SPEED    8
// #define MK_C_OFFSET_UNMOD    16
// #define MK_C_INTERVAL_UNMOD  16
// #define MK_C_OFFSET_0         1
// #define MK_C_INTERVAL_0      16
// #define MK_C_OFFSET_1         4
// #define MK_C_INTERVAL_1      16
// #define MK_C_OFFSET_2        32
// #define MK_C_INTERVAL_2      16

#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          0
#define MOUSEKEY_TIME_TO_MAX    60
#define MOUSEKEY_MAX_SPEED      7
#define MOUSEKEY_WHEEL_DELAY 0


// #define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

// Mouse key speed and acceleration.
// #undef MOUSEKEY_DELAY
// #define MOUSEKEY_DELAY          0
// #undef MOUSEKEY_INTERVAL
// #define MOUSEKEY_INTERVAL       16
// #undef MOUSEKEY_WHEEL_DELAY
// #define MOUSEKEY_WHEEL_DELAY    0
// #undef MOUSEKEY_MAX_SPEED
// #define MOUSEKEY_MAX_SPEED      6
// #undef MOUSEKEY_TIME_TO_MAX
// #define MOUSEKEY_TIME_TO_MAX    64



#define LAYOUT_demisco( \
       K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09, \
       K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19, \
       K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29, \
       N30,   N31,   K32,   K33,   K34,   K35,   K36,   K37,   N38,   N39 \
) \
LAYOUT( \
KC_NO, K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   KC_NO, \
KC_NO, K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   KC_NO, \
KC_NO, K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   KC_NO, \
                     K32,   K33,   K34,   K35,   K36,   K37 \
)
