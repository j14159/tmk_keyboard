#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: qwerty */
  KEYMAP(F1,  F2,  GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, ESC, \
         F3,  F4,  TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, DEL,   \
         F5,  F6,  LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  PGUP,  \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,UP,   PGDN,  \
         F9,  F10, FN3, LALT,LGUI,          FN1, FN0,                FN2,      LEFT,DOWN, RGHT),
  /* Layer 1: */
  KEYMAP(F11, F12, ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, DEL,  HOME, \
         F13, F14, TAB, Q,   W,   E,   R,   T,   Y,   PGUP,UP,  PGDN,P,   LBRC,RBRC,BSLS, END,   \
         F5,  F6,  LCTL,A,   S,   D,   F,   G,   H,   LEFT,DOWN,RGHT,SCLN,QUOT,     ENT,  PGUP,  \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,VOLU, MPLY,  \
         F9,  F10, FN3,LALT,LGUI,          FN1, FN0,               FN2,     MPRV,VOLD, MNXT),
  /* Layer 2: */
  KEYMAP(F11, F12, ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, DEL,  HOME, \
         F13, F14, TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, END,   \
         MPRV,MNXT,LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  PGUP, \
         VOLU,MPLY,LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,PGUP, MPLY,  \
         VOLD,MUTE,FN3,LALT,LGUI,         FN1, FN0,               FN2,      HOME,PGDN, END),
};

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
  [1] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),
  [2] = ACTION_LAYER_MOMENTARY(2),
  [3] = ACTION_LAYER_MOMENTARY(2),
};
