// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┐
     * │ 0,0 │ 0,1 │ 0,2 │
     * ├─────┼─────┼─────┤
     * │ 1,0 │ 1,1 │ 1,2 │
     * └─────┴─────┴─────┘
     */
    [0] = LAYOUT_ortho_3x2(
        KC_1,   KC_2,   KC_3,
        KC_4,   KC_5,   KC_6
    )
};
