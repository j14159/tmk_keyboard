#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP_M0116_ANSI(FN0,
                          ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,    FN0,EQL, PSLS,PAST,
                          TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,         PGUP, DEL,  HOME, DEL,
                          LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,     PGDN, UP,  END,  PPLS,
                          LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,    LEFT, DOWN,RIGHT,
                          LCTL,LALT,LGUI,GRV,        SPC,BSLS,LEFT,RIGHT,DOWN,UP,                   P0,   PDOT,PENT
                          ),
  [1] = KEYMAP_M0116_ANSI(TRNS,
                          ESC, F1, F2,   F3, F4,  F5,  F6,  F7,  F8,  F9, F10, F11,F12, BSPC,       TRNS,EQL, PSLS,PAST,
                          TAB,  Q,  W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,         P7,  P8,  P9,  PMNS,
                          LCTL, A,  S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,     P4,  P5,  P6,  PPLS,
                          LSFT, Z,  X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,    P1,  P2,  P3,
                          LCTL,LALT,LGUI,GRV,        SPC,BSLS,MPRV,MNXT,VOLD,VOLU,                  MPLY,PDOT,PENT
                          )
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TOGGLE(1)
};
