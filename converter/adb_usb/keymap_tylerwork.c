#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP_EXT_ANSI(
                        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           F8,  F12, BRK,                    FN1,
                        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
                        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, END, PGDN,    7,  8,  9,  PMNS,
                        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         4,  5,  6,  PPLS,
                        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,           UP,          1,  2,  3,
                        LCTL,LALT,LGUI,          SPC,                               RGUI,RCTL,      LEFT,DOWN,RGHT,    0,       PDOT,PENT
                        ),
  [1] = KEYMAP_EXT_ANSI(
                        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12,           PSCR,SLCK,PAUS,                   FN1,
                        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC,     INS, HOME,PGUP,    NLCK,PEQL,PSLS,PAST,
                        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,     DEL, MSTP,MPLY,    P7,  P8,  P9,  PMNS,
                        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,                         P4,  P5,  P6,  PPLS,
                        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT,          VOLU,         P1,  P2,  P3,
                        LCTL,LALT,LGUI,          SPC,                               RGUI,RCTL,     MPRV,VOLD,MNXT,    P0,       PDOT, PENT
                        )
};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TOGGLE(1),
  [1] = ACTION_LAYER_TOGGLE(1)
};



