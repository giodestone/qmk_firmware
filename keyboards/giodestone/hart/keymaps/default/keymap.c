/* Copyright 2020 Matt3o
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


/*
    HOW TO COMPILE:
    1. Open QMK MSYS
    2. type qmk compile -kb giodestone/hart -km default to create firmware
    3. Put Pi into boot mode
    4. Drag UF2 firmware onto it from C:\Users\Feliks\Documents\QMK\QMK_MSYS_HOME\.build

    MSYS Home: C:\Users\Feliks\Documents\QMK\QMK_MSYS_HOME
    Keyboard Folder: C:\Users\Feliks\Documents\QMK\QMK_MSYS_HOME\keyboards\giodestone\hart

    HOW TO DEBUG:
    1. Open QMK MSYS
    2. type qmk console
    3. Enjoy

    More info: https://docs.qmk.fm/faq_debug

*/


// #include <print.h>

#include QMK_KEYBOARD_H


// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY = 0,
    // _FN1,
    // _FN2
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // default
    /* DEFAULT KEYMAP - Items with a '!' prefix indicate that something may not be obvious
      +---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
      | Row/Col |   1    | 2  |  3  |  4  |   5   |   6   |   7   |   8   |   9   |  10   |  11  |  12   |   13   |   14   |  15   |   16    |
      +---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
      |       6 | ESC    | F1 | F2  | F3  | F4    | F5    | F6    | F7    | F8    | F9    | F10  | F11   | F12    | PrtSc  | !Del  | !NULL   |
      |       5 | `      | 1  | 2   | 3   | 4     | 5     | 6     | 7     | 8     | 9     | 0    | -     | =      | BkSp   | Home  | PotBtn  |
      |       4 | Tab    | Q  | W   | E   | R     | T     | Y     | U     | I     | O     | P    | [     | ]      | !Ins   | PgUp  | !NULL   |
      |       3 | Caps   | A  | S   | D   | F     | G     | H     | J     | K     | L     | ;    | '     | #      | Return | PgDn  | Macro 1 |
      |       2 | LShift | \  | Z   | X   | C     | V     | B     | N     | M     | ,     | .    | /     | RShift | UP     | End   | Macro 2 |
      |       1 | LCtrl  | Fn | Win | Alt | !NULL | !NULL | Space | !NULL | !NULL | !NULL | RAlt | RCtrl | LEFT   | DOWN   | RIGHT | Macro 3 |
      +---------+--------+----+-----+-----+-------+-------+-------+-------+-------+-------+------+-------+--------+--------+-------+---------+
      */
     
    /*TODO: POT BUTTON AND FN ARE NOT DONE*/

    [_QWERTY] = LAYOUT(
        KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PRINT_SCREEN, KC_DEL, XXXXXXX,
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_HOME, KC_F16, 
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_INSERT, KC_PGUP, XXXXXXX,
        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_NONUS_HASH, KC_ENTER, KC_PGDN, KC_F13,
        KC_LEFT_SHIFT, KC_BACKSLASH, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_UP, KC_END, KC_F14,
        KC_LEFT_CTRL, XXXXXXX, KC_LEFT_GUI, KC_LEFT_ALT, XXXXXXX, XXXXXXX, KC_SPACE, XXXXXXX, XXXXXXX, XXXXXXX, KC_RIGHT_ALT, KC_RIGHT_CTRL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_F15
    ),
    
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk taken from lily58 default keymap
// #ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_set_cursor(0, 1);
    oled_write("Hello World!", false);
    // led_t led_state = host_keyboard_led_state();
    // oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    // oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);

    // uprintf("hello");

    return false;
}
// #endif // OLED_ENABLE`

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
