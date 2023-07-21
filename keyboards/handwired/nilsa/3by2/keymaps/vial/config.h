// Copyright 2023 Nils Andresen (@nils-a)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once


#define VIAL_KEYBOARD_UID {0x6F, 0x7A, 0x80, 0x6C, 0xA6, 0x70, 0x65, 0x84}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
