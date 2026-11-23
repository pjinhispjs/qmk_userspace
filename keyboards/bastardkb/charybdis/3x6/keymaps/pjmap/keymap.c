/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    BASE = 0,
    SYMB,
    NUMB,
    FUNC,
    COPY,
    NAVI,
    MOUS,
};

#define HRM_A LGUI_T(KC_A)
#define HRM_S LALT_T(KC_S)
#define HRM_D LCTL_T(KC_D)
#define HRM_F LSFT_T(KC_F)
#define HRM_J RSFT_T(KC_J)
#define HRM_K RCTL_T(KC_K)
#define HRM_L RALT_T(KC_L)
#define HRM_SCL RGUI_T(KC_SCLN)

#define NAV_SPC LT(NAVI,KC_SPC)
#define MOU_SPC LT(MOUS,KC_SPC)
#define MOU_ESC LT(MOUS,KC_ESC)
#define MOU_SCL LT(MOUS,KC_SCLN)
#define NUM_SPC LT(NUMB,KC_SPC)
#define MOU_TAB LT(MOUS,KC_TAB)
#define SYM_UND LT(SYMB,KC_UNDS)
#define SYM_ENT LT(SYMB,KC_ENT)
#define PAD_ENT LT(NUMB,KC_ENT)
#define SYM_TAB LT(SYMB,KC_TAB)
#define NUM_BSP LT(NUMB,KC_BSPC)
#define NAV_BSP LT(NAVI,KC_BSPC)
#define FUN_DEL LT(FUNC,KC_DEL)
#define COP_Z   LT(COPY,KC_Z)

//clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_LGUI,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL, HRM_A  , HRM_S  , HRM_D  , HRM_F  , KC_G   ,    KC_H , HRM_J  , HRM_K  , HRM_L  , MOU_SCL, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, FUN_DEL,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  MOU_ESC, NUM_SPC, SYM_TAB,   KC_ENT, NAV_BSP
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [SYMB] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       XXXXXXX, KC_GRV , KC_LT  , KC_GT  , KC_MINS, KC_PIPE,    KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR , XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_UNDS, KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL , KC_AMPR,    KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQUO, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,    KC_AT  , KC_UNDS, KC_COMM, KC_DOT , KC_QUOT, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,   _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [NUMB] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, KC_GRV , KC_LT  , KC_GT  , KC_MINS, KC_PIPE,    _______, KC_7,    KC_8,    KC_9, _______, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_UNDS, KC_EXLM, KC_ASTR, KC_SLSH, KC_EQL , KC_AMPR,    KC_DOT , KC_4,    KC_5,    KC_6, KC_SCLN, KC_DEL,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, KC_TILD, KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,    KC_0   , KC_1,    KC_2 ,   KC_3, _______, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   _______, _______, _______,   _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [NAVI] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, _______, LSFT(KC_HOME), RCS(KC_HOME), RCS(KC_END), LSFT(KC_END),    LCTL(KC_LEFT), _______, _______, LCTL(KC_RGHT), _______, LCTL(KC_BSPC),
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END,     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_CAPS, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, _______, _______, LCTL(KC_HOME), LCTL(KC_END), _______,    _______, _______, _______, _______, _______, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   _______, _______, _______,   _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [FUNC] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, KC_F12,  KC_F7,    KC_F8,  KC_F9,   KC_PSCR,    _______, _______, _______, _______, _______, QK_BOOT,

  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, KC_F11,  KC_F4,    KC_F5,  KC_F6,   KC_SCRL,    _______, _______, _______, _______, _______, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, KC_F10,  KC_F1,    KC_F2,  KC_F3,   KC_PAUS,    _______, _______, _______, _______, _______, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   _______, _______, _______,   _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
      ),
  [MOUS] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, XXXXXXX, MS_BTN4, XXXXXXX, MS_BTN5, XXXXXXX,    XXXXXXX, MS_BTN4, XXXXXXX, MS_BTN5, XXXXXXX, XXXXXXX,

  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL, XXXXXXX, MS_BTN2, MS_BTN3, MS_BTN1, XXXXXXX,    XXXXXXX, MS_BTN1, MS_BTN3, MS_BTN2, XXXXXXX, XXXXXXX,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT, XXXXXXX, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,   MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR, XXXXXXX, XXXXXXX,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   _______, _______, _______,   _______, _______
  //                            ╰───────────────────────────╯ ╰──────────────────╯
      ),
};
// clang-format on
