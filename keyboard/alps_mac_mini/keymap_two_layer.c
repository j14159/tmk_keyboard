#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: qwerty */
  KEYMAP(F1,  F2,  GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, ESC, \
         F3,  F4,  TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, FN0,   \
         F5,  F6,  LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  PGUP,  \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,  UP, PGDN,  \
         F9,  F10, LCTL,LALT,LGUI,          FN2, FN1,                  RGUI,     LEFT,DOWN, RGHT),
  /* Layer 1: */
  KEYMAP(F9,  F10, ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, ESC, \
         F11, F12, TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, TRNS,   \
         F13, F14, LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     MUTE,  PGUP, \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,VOLU, MPLY,  \
         F9,  F10, LCTL,LALT,LGUI,          SPC, TRNS,               RGUI,     MPRV,VOLD, MNXT),
  /* Layer 2: */
  KEYMAP(F11, F12, ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, HOME, \
         F13, F14, TAB, Q,   W,   E,   R,   T,   Y,   PGUP,UP,  PGDN,P,   LBRC,RBRC,BSLS, END,   \
         F5,  F6,  LCTL,A,   S,   D,   F,   G,   H,   LEFT,DOWN,RGHT,SCLN,QUOT,     ENT,  PGUP,  \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,VOLU, PGDN,  \
         F9,  F10, LCTL,LALT,LGUI,          SPC, TRNS,               RGUI,     LEFT,VOLD, RGHT),
};

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TOGGLE(1),
  [1] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),
  [2] = ACTION_LAYER_TAP_KEY(2, KC_SPACE),
};
