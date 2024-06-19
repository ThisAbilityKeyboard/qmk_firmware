// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "analog.h"
#include "print.h"
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_1x1(
        KC_1
    )
};


void matrix_scan_user(void) {
    uint16_t pot_value = analogReadPin(A1); // Replace A0 with the pin your potentiometer is connected to
    // Do something with the pot_value, like controlling backlight or RGB lighting
    uprintf("Vakue: %d", pot_value);
    if (pot_value>900){
        tap_code(KC_3);
    }
}