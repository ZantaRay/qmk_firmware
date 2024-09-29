/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#define EE_HANDS

#define DEBOUNCE 5

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP21, GP20, GP19, GP18, GP17, GP16 }
#define MATRIX_COL_PINS { GP10, GP11, GP12, GP13, GP14, GP15 }

/* Joystick */
#define JOYSTICK_BUTTON_COUNT 1
#define JOYSTICK_AXIS_COUNT 2
#define JOYSTICK_AXIS_RESOLUTION 10

// Min 0, max 32 
#define JOYSTICK_BUTTON_COUNT 0 
// Min 0, max 6: X, Y, Z, Rx, Ry, Rz 
#define JOYSTICK_AXIS_COUNT 2

/* Encoders */
#define ENCODER_A_PINS { GP26 }
#define ENCODER_B_PINS { GP22 }

/* Reset */
#define BOOTMAGIC_ROW 0
#define BOOTMAGIC_COLUMN 0
#define BOOTMAGIC_ROW_RIGHT 6
#define BOOTMAGIC_COLUMN_RIGHT 5
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

