/* Copyright 2020 Tyler Berry
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
#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap Base Layer
   * ,------------------------------------------------------------------------------.
   * | ESC|   1|   2|   3|   4|   5|   6|   7|   8|   9|   0|   -|   =|  BACKSP|  `~|
   * |------------------------------------------------------------------------------|
   * |   TAB|   Q|   W|   E|   R|   T|   Y|   U|   I|   O|   P|   [|   ]|     \| DEL|
   * |------------------------------------------------------------------------------|
   * |CAPSLCK|   A|   S|   D|   F|   G|   H|   J|   K|   L|  ;:|  '"|     ENTER|PGUP|
   * |------------------------------------------------------------------------------|
   * |     SHIFT|   Z|   X|   C|   V|   B|   N|   M|  ,<|  .>|  /?|  SHIFT|  UP|PGDN|
   * |------------------------------------------------------------------------------|
   * | CTRL| CODE| RALT|                         SPACE|LALT|  FN|META|LEFT|DOWN|RIGT|
   * `------------------------------------------------------------------------------'
   */
[0] = LAYOUT_65_ansi(
  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_GRV,
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
  KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP,
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO, KC_PGDN,
  KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_RALT, LM(1), LM(2), KC_LEFT, KC_NO, KC_RGHT
),

  /* Keymap Fn Layer
   * ,------------------------------------------------------------------------------.
   * |  `~|FN 1|FN 2|FN 3|FN 4|FN 5|FN 6|FN 7|FN 8|FN 9|FN10|FN11|FN12|        |PLAY|
   * |------------------------------------------------------------------------------|
   * |      |    |  UP|    |    |    |    |    | INS|    |PRSC|    |    |      |MUTE|
   * |------------------------------------------------------------------------------|
   * |       |LEFT|DOWN|RIGT|    |    |    |    |    |    |    |    |          |VLUP|
   * |------------------------------------------------------------------------------|
   * |          |    |    |    |    |SLCK|NLCK|MENU| RWD|FFWD|    |       |    |VLDN|
   * |------------------------------------------------------------------------------|
   * |     |     |     |                              |    |    |    |HOME|    | END|
   * `------------------------------------------------------------------------------'
   */

[1] = LAYOUT_65_ansi(
  KC_SLEP, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_MPLY,
  KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS, KC_TRNS, KC_PSCR, KC_TRNS, KC_TRNS, KC_MUTE,
  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLU,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SLCK, KC_NLCK, KC_APP, KC_MRWD, KC_MFFD, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD,
  LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_TRNS, KC_END
),

  /* Keymap Meta Layer
   * ,------------------------------------------------------------------------------.
   * |    |NP 1|NP 2|NP 3|NP 4|NP 5|NP 6|NP 7|NP 8|NP 9|NP 0|    |    |        |    |
   * |------------------------------------------------------------------------------|
   * |      |    |    |    |    |    |    |    |    |    |    |    |    |      |    |
   * |------------------------------------------------------------------------------|
   * |       |    |    |    |    |    |    |    |    |    |    |    |          |BRUP|
   * |------------------------------------------------------------------------------|
   * |          |RTOG|RHUD|RHUI|RSAD|RSAI|RVAD|RVAI|    |    |    |       |    |BRDN|
   * |------------------------------------------------------------------------------|
   * |     |     |     |                              |    |    |    |    |    |    |
   * `------------------------------------------------------------------------------'
   */

[2] = LAYOUT_65_ansi(
  KC_TRNS, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5, KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRIU,
  KC_TRNS, RGB_TOG, RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BRID,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
)
};
