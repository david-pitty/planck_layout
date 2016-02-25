#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = { /* QWERTY */
    {KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC},
    {KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT},
    {KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT},
    {KC_LCTL, FUNC(3), KC_LALT, KC_LGUI, FUNC(1), KC_SPC, KC_SPC, FUNC(2), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT}
  },
  [1] = { /* RAISE */
    {KC_1,      KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,       KC_9,    KC_0,    KC_MINS, FUNC(4)},
    {S(KC_GRV), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_MINS), KC_GRV,  KC_LBRC, KC_RBRC, KC_BSLS},
    {FUNC(5),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_RSFT},
    {KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, FUNC(1), KC_TRNS, KC_TRNS, KC_TRNS,    KC_MUTE, KC_VOLD, KC_VOLU, KC_TRNS}
  },
  [2] = { /* LOWER */
    {S(KC_1), S(KC_2),  S(KC_3), S(KC_4), S(KC_5), S(KC_6),  S(KC_7),  S(KC_8),    S(KC_9),   S(KC_0),    KC_EQL,     KC_DELETE},
    {KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  S(KC_MINS), S(KC_EQL), S(KC_LBRC), S(KC_RBRC), S(KC_BSLS)},
    {KC_TRNS, KC_PAUSE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_MINS,    KC_TRNS,   KC_TRNS,    KC_TRNS,    KC_RSFT},
    {KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  FUNC(2),    KC_HOME,   KC_PGDN,    KC_PGUP,    KC_END}
  },
  [3] = { /* CUSTOM */
    {KC_PSCR,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, S(KC_DELETE)},
    {KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12},
    {KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN2},
    {KC_INSERT, FUNC(3), KC_TRNS, KC_TRNS, KC_TRNS, S(KC_INSERT), KC_TRNS, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R}
  },
  [4] = { /* PLOVER */
    {KC_RGHT, KC_UP,   KC_DOWN, KC_LEFT, KC_M,  KC_N,  KC_V,  KC_C,  KC_LGUI, KC_LALT, KC_NO, KC_TRNS},
    {KC_ENT,  KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, FUNC(1)},
    {KC_QUOT, KC_SCLN, KC_L,    KC_K,    KC_J,  KC_H,  KC_G,  KC_F,  KC_D,    KC_S,    KC_A,  KC_TAB},
    {KC_LBRC, KC_P,    KC_O,    KC_I,    KC_U,  KC_Y,  KC_T,  KC_R,  KC_E,    KC_W,    KC_Q,  KC_ESC}
  }
};


const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay RAISE
    [2] = ACTION_LAYER_MOMENTARY(2),  // to Fn overlay LOWER
    [3] = ACTION_LAYER_MOMENTARY(3),  // to Fn overlay CUSTOM

    [4] = ACTION_DEFAULT_LAYER_SET(0), // QWERTY keyboard
    [5] = ACTION_DEFAULT_LAYER_SET(4), // PLOWER layout
};
