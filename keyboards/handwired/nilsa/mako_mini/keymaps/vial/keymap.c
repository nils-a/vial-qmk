// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┐
     * │ 0,0 │ 0,1 │ 0,2 │ 0,3 │
     * ├─────┼─────┼─────┼─────┤
     * │ 1,0 │ 1,1 │ 1,2 │ 1,3 │
     * ├─────┼─────┼─────┼─────┤
     * │ 2,0 │ 2,1 │ 2,2 │     │
     * ├─────┼─────┼─────┼ 2,3 ┤
     * │ 3,0 │ 3,1 │ 3,2 │     │
     * ├─────┼─────┼─────┼─────┤
     * │ 4,0 │ 4,1 │ 4,2 │     │
     * ├─────┼─────┼─────┼ 4,3 ┤
     * │    5,0    │ 5,1 │     │
     * └─────┴─────┴─────┴─────┘
     */
    [0] = LAYOUT_default(
        KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_P4,    KC_P5,    KC_P6,
        KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_P0,    KC_PDOT
    )
};
