/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include <stdio.h>


#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

// non-KC_ keycodes
#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

enum layers { BASE, MEDR, NAVR, MOUR, NSSL, NSL, FUNL };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* RSTHG
 * +----------------------------------+                    +----------------------------------+
 * |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   '  |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |LGUI/R|LALT/S|LCTL/T|LSFT/H|   G  |                    |   M  |LSFT/N|LCTL/A|LALT/I|LGUI/O|
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |                    |   \  |   K  |   ,  |   .  |   /  |
 * +----------------------------------------+         +---------------------------------------+ 
 *                     |  ESC |  SPC | TAB  |         |  ENT |   E  |  DEL |
 *                     |(MEDR)|(NAVR)|(MOUR)|         |(NSSL)|(NSL) |(FUNL)|
 *                     +--------------------+         +--------------------+
 */

  [BASE] = LAYOUT(
    KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_R),      LALT_T(KC_S),      LCTL_T(KC_T),      LSFT_T(KC_H),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_A),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              KC_X,              KC_C,              KC_D,              LT(MEDR, KC_V),    LT(FUNL, KC_BSLS), KC_K,              KC_COMM,           KC_DOT,            KC_SLSH,
                                                             LT(NAVR, KC_SPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_E)
  ),


  /* NAVR - Navigation
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    | AGIN | UNDO |  CUT | COPY | PSTE |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    | CAPS | LEFT | DOWN |  UP  | RGHT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    |  INS | HOME | PGDN | PGUP |  END |
 * +----------------------------------------+         +---------------------------------------+
 *                     |      |      |      |         |  ENT | BSPC |  DEL |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */

  [NAVR] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                               KC_NA,   KC_NA,   KC_ENT,  KC_BSPC
  ),

  /* MOUR - Mouse
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    |      |      |      |      |      |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    |      | MLFT | MDWN |  MUP | MRHT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    |      | MWHL | MWHD | MWHU | MWHR |
 * +----------------------------------------+         +---------------------------------------+
 *                     |      |      |      |         | BTN1 | BTN2 | BTN3 |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */
  [MOUR] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                               KC_NA,   KC_NA,   KC_BTN1, KC_BTN3
  ),

  /* MEDR - Media
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    |  TOG |  MOD |  HUI |  SAI |  VAI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    |      | MPRV | VOLD | VOLU | MNXT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    |      |      |      |      |      |
 * +----------------------------------------+         +---------------------------------------+
 *                     |      |      |      |         | MSTP | MPLY | MUTE |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */
  [MEDR] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_MUTE, KC_NU,   KC_NU,   KC_NU,
                               KC_NA,   KC_NA,   KC_MSTP, KC_MPLY
  ),

  /* FUNL - Function
 * +----------------------------------+                    +----------------------------------+
 * |  F12 |  F7  |  F8  |  F9  | PSCR |                    |STENO |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |  F11 |  F4  |  F5  |  F6  | SLCK |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |  F10 |  F1  |  F2  |  F3  | PAUS |                    |      |      |      |      |      |
 * +----------------------------------------+         +---------------------------------------+
 *                     |  APP |  SPC |  TAB |         |      |      |      |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */
  [FUNL] = LAYOUT(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA,     KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA,     KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA,     KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_SPC,  KC_TAB,  KC_NA,     KC_NA
  ),

  /* NSL - Numbers
 * +----------------------------------+                    +----------------------------------+
 * |   [  |   7  |   8  |   9  |  ]   |                    |      |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   ;  |   4  |   5  |   6  |  =   |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |  \   |                    |      |      |      |      |      |
 * +----------------------------------------+         +---------------------------------------+
 *                     |   .  |   0  |   -  |         |      |      |      |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */
  [NSL] = LAYOUT(
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NA,  KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NA,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NA,  KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_0,    KC_MINS, KC_NA,  KC_NA
  ),

  /* NSSL - Symbols
 * +----------------------------------+                    +----------------------------------+
 * |   {  |   &  |   *  |   (  |  ]   |                    |      |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   :  |   $  |   %  |   ^  |  +   |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |  |   |                    |      |      |      |      |      |
 * +----------------------------------------+         +---------------------------------------+
 *                     |   >  |   )  |   _  |         |      |      |      |
 *                     |      |      |      |         |      |      |      |
 *                     +--------------------+         +--------------------+
 */
  [NSSL] = LAYOUT(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA,  KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA,  KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA,  KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_RPRN, KC_UNDS, KC_NA,  KC_NA
  )
};
