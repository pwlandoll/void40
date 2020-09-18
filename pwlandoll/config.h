/*
Copyright 2020 GhostSeven

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

/* USB Device descriptor parameter */
#define VENDOR_ID 0xF055    // VOID
#define PRODUCT_ID 0x3531   // VOID40
#define DEVICE_VER 0x0003
#define MANUFACTURER Peter Landoll
#define PRODUCT VOID40PL
#define DESCRIPTION A handwired 40% 12x4 ortholinear keyboard with BLE

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// Ensure that Bluetooth pins are defined correctly
#define AdafruitBleResetPin D4
#define AdafruitBleCSPin B4
#define AdafruitBleIRQPin E6
// Row pins on A0, A1, A2, A3
#define MATRIX_ROW_PINS { F7, F6, F5, F4 }
// Column pins on A4, A5, 0, 1, 13, 12, 11, 10, 9, 6, 5, 3
#define MATRIX_COL_PINS { F1, F0, D2, D3, C7, D6, B7, B6, B5, D7, C6, D0 }
#define UNUSED_PINS { D1 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define FORCE_NKRO

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif

#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT

#define OUTPUT_AUTO_ENABLE
