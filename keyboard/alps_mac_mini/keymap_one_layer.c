#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(F1,  F2,  ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, HOME,  \
         F3,  F4,  TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, END,   \
         F5,  F6,  LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  PGUP,  \
         F7,  F8,  LSFT,     Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,  UP, PGDN,  \
         F9,  F10, LCTL,LALT,LGUI,          SPC, 1,                  RGUI,     LEFT,DOWN, RGHT),
};

const action_t PROGMEM fn_actions[] = {};
