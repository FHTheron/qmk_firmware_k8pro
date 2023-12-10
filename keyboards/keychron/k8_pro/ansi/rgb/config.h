/* Copyright 2021 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef RGB_MATRIX_ENABLE
/* RGB Matrix driver configuration */
#    define DRIVER_COUNT 2

#    define DRIVER_ADDR_1 0b1110111
#    define DRIVER_ADDR_2 0b1110100
#    define DRIVER_1_LED_COUNT 47
#    define DRIVER_2_LED_COUNT 40
#    define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_COUNT + DRIVER_2_LED_COUNT)

/* Set to infinit, which is use in USB mode by default */
#    define RGB_MATRIX_TIMEOUT RGB_MATRIX_TIMEOUT_INFINITE

/* Allow shutdown of led driver to save power */
#    define RGB_MATRIX_DRIVER_SHUTDOWN_ENABLE
/* Turn off backlight on low brightness to save power */
#    define RGB_MATRIX_BRIGHTNESS_TURN_OFF_VAL 32

/* RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */

#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS

/* Set LED driver current */
#    define CKLED2001_CURRENT_TUNE \
        { 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38 }



// Constant
#define MK_3_SPEED
#define MK_C_OFFSET_UNMOD       16    //  Cursor offset per movement (unmodified)
#define MK_C_INTERVAL_UNMOD     16    //  Time between cursor movements (unmodified)
#define MK_C_OFFSET_0           2     //  Cursor offset per movement (KC_ACL0)
#define MK_C_INTERVAL_0         8    //  Time between cursor movements (KC_ACL0)
#define MK_C_OFFSET_1           4     //  Cursor offset per movement (KC_ACL1)
#define MK_C_INTERVAL_1         8    //  Time between cursor movements (KC_ACL1)
#define MK_C_OFFSET_2           8    //  Cursor offset per movement (KC_ACL2)
#define MK_C_INTERVAL_2         8    //  Time between cursor movements (KC_ACL2)
#define MK_W_OFFSET_UNMOD       1     //  Scroll steps per scroll action (unmodified)
#define MK_W_INTERVAL_UNMOD     40    //  Time between scroll steps (unmodified)
#define MK_W_OFFSET_0           1     //  Scroll steps per scroll action (KC_ACL0)
#define MK_W_INTERVAL_0         64   //  Time between scroll steps (KC_ACL0)
#define MK_W_OFFSET_1           1     //  Scroll steps per scroll action (KC_ACL1)
#define MK_W_INTERVAL_1         32   //  Time between scroll steps (KC_ACL1)
#define MK_W_OFFSET_2           1     //  Scroll steps per scroll action (KC_ACL2)
#define MK_W_INTERVAL_2         8    //  Time between scroll steps (KC_ACL2)

// Kinetic
// #define MK_KINETIC_SPEED
// #define MOUSEKEY_INTERVAL 8
// #define MOUSEKEY_MOVE_DELTA 4
// #define MOUSEKEY_BASE_SPEED 2000
// #define MOUSEKEY_DECELERATED_SPEED        200
// #define MOUSEKEY_ACCELERATED_SPEED        1000
// #define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 2
// #define MOUSEKEY_WHEEL_BASE_MOVEMENTS    48
// #define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 64

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// Accel
// #define MOUSEKEY_INTERVAL 8
// #define MOUSEKEY_MOVE_DELTA 2
// #define MOUSEKEY_MAX_SPEED 6
// #define MOUSEKEY_TIME_TO_MAX 140
// #define MOUSEKEY_WHEEL_INTERVAL 16


#endif
