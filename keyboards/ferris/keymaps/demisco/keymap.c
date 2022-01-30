#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include <stdio.h>

#define KC_NA KC_NO // present but not available for use

// non-KC_ keycodes
#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

enum layers { BASE, MEDIA, NAV, MOUSE, SYM, NUM, FUN };


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* RSTHG
 * +----------------------------------+                    +----------------------------------+
 * |   Q  |   W  |   F  |   P  |   B  |                    |   J  |   L  |   U  |   Y  |   '  |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |LGUI/R|LALT/S|LCTL/T|LSFT/H|   G  |                    |   M  |LSFT/N|LCTL/A|LALT/I|LGUI/O|
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   Z  |   X  |   C  |   D  |   V  |                    |   \  |   K  |   ,  |   .  |   /  |
 * |      |      |      |      |(MEDIA)                    | (FUN)|      |      |      |      | 
 * +--------------------------------------+           +---------------------------------------+ 
 *                         |  SPC | TAB  |             |  ENT |   E  | 
 *                         |(NAV) |(MOUSE)             |(SYM) |(NUM) |
 *                         +--------------+           +--------------+
 */

  [BASE] = LAYOUT(
    KC_Q,              KC_W,              KC_F,              KC_P,             KC_B,              KC_J,             KC_L,              KC_U,              KC_Y,              KC_QUOT,
    LGUI_T(KC_R),      LALT_T(KC_S),      LCTL_T(KC_T),      LSFT_T(KC_H),     KC_G,              KC_M,             LSFT_T(KC_N),      LCTL_T(KC_A),      LALT_T(KC_I),      LGUI_T(KC_O),
    KC_Z,              KC_X,              KC_C,              KC_D,             LT(MEDIA, KC_V),   LT(FUN, KC_BSLS), KC_K,              KC_COMM,           KC_DOT,            KC_SLSH,
                                                             LT(NAV, KC_SPC),  LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),  LT(NUM, KC_E)
  ),


  /* NAV - Navigation
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    | AGIN | UNDO |  CUT | COPY | PSTE |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    | CAPS | LEFT | DOWN |  UP  | RGHT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    |  INS | HOME | PGDN | PGUP |  END |
 * +--------------------------------------+            +--------------------------------------+
 *                          |      |      |            |  ENT | BSPC |
 *                          |      |      |            |      |      |
 *                          +-------------+            +-------------+
 */

  [NAV] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA, KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA, KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                               KC_NA,   KC_NA, KC_ENT,  KC_BSPC
  ),

  /* MOUSE - Mouse
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    |      |      |      |      |      |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    |      | MLFT | MDWN |  MUP | MRHT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    | BTN1 | MWHL | MWHD | MWHU | MWHR |
 * +--------------------------------------+            +--------------------------------------+
 *                          |      |      |            | BTN2 | BTN3 |
 *                          |      |      |            |      |      |
 *                          +-------------+            +-------------+
 */
  [MOUSE] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NA,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA, KC_NA,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA, KC_BTN1, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                               KC_NA,   KC_NA, KC_BTN2, KC_BTN3
  ),

  /* MEDIA - Media
 * +----------------------------------+                    +----------------------------------+
 * |  RST |      |      |      |      |                    |  TOG |  MOD |  HUI |  SAI |  VAI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * | LGUI | LALT | LCTL | LSFT |      |                    |      | MPRV | VOLD | VOLU | MNXT |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |      |      |      |      |      |                    |      | MUTE |      |      |      |
 * +--------------------------------------+            +--------------------------------------+
 *                          |      |      |            | MSTP | MPLY |
 *                          |      |      |            |      |      |
 *                          +-------------+            +-------------+
 */
  [MEDIA] = LAYOUT(
    KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NA,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
    KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_MUTE, KC_NA,   KC_NA,   KC_NA,
                               KC_NA,   KC_NA,   KC_MSTP, KC_MPLY
  ),

  /* FUN - Function
 * +----------------------------------+                    +----------------------------------+
 * |  F12 |  F7  |  F8  |  F9  | PSCR |                    |      |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |  F11 |  F4  |  F5  |  F6  | SLCK |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |  F10 |  F1  |  F2  |  F3  | PAUS |                    |      |      |      |      |      |
 * +-------------------------------------+             +--------------------------------------+
 *                         |  SPC |  TAB |             |      |      |
 *                         |      |      |             |      |      |
 *                         +-------------+             +-------------+
 */
  [FUN] = LAYOUT(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA, KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA, KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_SPC,  KC_TAB,  KC_NA, KC_NA
  ),

  /* NUM - Numbers
 * +----------------------------------+                    +----------------------------------+
 * |   [  |   7  |   8  |   9  |  ]   |                    |      |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   ;  |   4  |   5  |   6  |  =   |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   `  |   1  |   2  |   3  |  \   |                    |      |      |      |      |      |
 * +--------------------------------------+            +--------------------------------------+
 *                          |   0  |   -  |            |      |      |
 *                          |      |      |            |      |      |
 *                          +-------------+            +-------------+
 */
  [NUM] = LAYOUT(
    KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_GRV,  KC_1, KC_2, KC_3, KC_BSLS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_0,    KC_MINS, KC_NA,   KC_NA
  ),

  /* SYM - Symbols
 * +----------------------------------+                    +----------------------------------+
 * |   {  |   &  |   *  |   (  |  ]   |                    |      |      |      |      |  RST |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   :  |   $  |   %  |   ^  |  +   |                    |      | LSFT | LCTL | LALT | LGUI |
 * |------+------+------+------+------|                    |------+------+------+------+------|
 * |   ~  |   !  |   @  |   #  |  |   |                    |      |      |      |      |      |
 * +--------------------------------------+             +-------------------------------------+
 *                          |   )  |   _  |             |      |      | 
 *                          |      |      |             |      |      |
 *                          +-------------+             +-------------+
 */
  [SYM] = LAYOUT(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA, KC_NA,   KC_NA,   KC_NA,   KC_RST,
    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA, KC_NA,   KC_NA,   KC_ALGR, KC_NA,
                               KC_RPRN, KC_UNDS, KC_NA, KC_NA
  )
};
