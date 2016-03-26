#include "planck.h"

#define _PLOVER 0
#define _QWERTY 1
#define _NUMS 2
#define _SYMB 3
#define _CUSTOM 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_PLOVER] = {
    {KC_Q,    KC_W, KC_E,    KC_R,    KC_H, KC_4, KC_H,  KC_U,        KC_I,    KC_O,    KC_P,    KC_LBRC},
    {KC_A,    KC_S, KC_D,    KC_F,    KC_H, KC_0, KC_H,  KC_J,        KC_K,    KC_L,    KC_SCLN, KC_QUOT},
    {KC_LSFT, KC_0, KC_PGUP, KC_PGDN, KC_0, KC_0, KC_0,  DF(_QWERTY), KC_MUTE, KC_VOLD, KC_VOLU, KC_RSFT},
    {KC_BSPC, KC_0, KC_LGUI, KC_C,    KC_V, KC_N, KC_N,  KC_M,        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
  },
  [_QWERTY] = {
    {KC_ESC,  KC_Q,        KC_W,    KC_E,    KC_R,      KC_T,   KC_Y,   KC_U,      KC_I,    KC_O,    KC_P,    KC_BSPC},
    {KC_TAB,  KC_A,        KC_S,    KC_D,    KC_F,      KC_G,   KC_H,   KC_J,      KC_K,    KC_L,    KC_SCLN, KC_QUOT},
    {KC_LSFT, KC_Z,        KC_X,    KC_C,    KC_V,      KC_B,   KC_N,   KC_M,      KC_COMM, KC_DOT,  KC_SLSH, KC_ENT},
    {KC_LCTL, MO(_CUSTOM), KC_LALT, KC_LGUI, MO(_NUMS), KC_SPC, KC_SPC, MO(_SYMB), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
  },
  [_NUMS] = {
    {KC_1,        KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,       KC_9,    KC_0,    KC_MINS, KC_TRNS},
    {S(KC_GRV),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, S(KC_MINS), KC_GRV,  KC_LBRC, KC_RBRC, KC_BSLS},
    {DF(_PLOVER), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT},
    {KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, MO(_NUMS), KC_TRNS, KC_TRNS, KC_TRNS,    KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS}
  },
  [_SYMB] = {
    {S(KC_1), S(KC_2),  S(KC_3), S(KC_4), S(KC_5), S(KC_6),  S(KC_7),  S(KC_8),    S(KC_9),   S(KC_0),    KC_EQL,     KC_DELETE},
    {KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  S(KC_MINS), S(KC_EQL), S(KC_LBRC), S(KC_RBRC), S(KC_BSLS)},
    {KC_TRNS, KC_PAUSE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_MINS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_RSFT},
    {KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  MO(_SYMB),  KC_HOME,   KC_PGDN,    KC_PGUP,    KC_END}
  },
  [_CUSTOM] = {
    {KC_PSCR,   KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_DELETE)},
    {KC_F1,     KC_F2,       KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12},
    {KC_TRNS,   KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2},
    {KC_INSERT, MO(_CUSTOM), KC_TRNS, KC_TRNS, KC_TRNS, S(KC_INSERT), KC_TRNS, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R}
  }
};


const uint16_t PROGMEM fn_actions[] = {
};
