/*
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

#include "config_common.h"

#define PRODUCT_ID  0x3537
#define DEVICE_VER  0x0001
#define PRODUCT     Tractyl Manuform(5x5)

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 5

// wiring of each half
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS { E6, B4, B5, F6, F5 }

#define DIODE_DIRECTION ROW2COL

#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_HAND_PIN D2

#define ROTATIONAL_TRANSFORM_ANGLE     -25

/* Bootmagic Lite key configuration */
#define BOOTMAGIC_LITE_ROW             0
#define BOOTMAGIC_LITE_COLUMN          0
#define BOOTMAGIC_LITE_ROW_RIGHT       4
#define BOOTMAGIC_LITE_COLUMN_RIGHT    4

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2
#define EE_HANDS


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* PMW3360 Settings */
#define PMW3360_CS_PIN           F7
