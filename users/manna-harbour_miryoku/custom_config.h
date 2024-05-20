// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.


#pragma once
#include "keymap_steno.h"

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(GAME,   "Game") \
MIRYOKU_X(STENO,  "Steno") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")

#define FORCE_NKRO
#define XXX KC_NO

#define MIRYOKU_LAYERMAPPING_BASE( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  DF(U_GAME), \
XXX,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  XXX, \
XXX,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  XXX, \
                  K32,  K33,  K34,         K35,  K36,  K37 \
)

// Gaming Layer  

#define MIRYOKU_LAYER_GAME \
KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,              KC_Y,    KC_U,    KC_UP,    KC_O,    KC_P, \
KC_A,    KC_S,    KC_D,    KC_F,    KC_G,              KC_H,    KC_LEFT, KC_DOWN,  KC_RIGHT, KC_SCLN, \
KC_1,    KC_2,    KC_3,    KC_4,    KC_B,              KC_N,    KC_M,    KC_COMM,  KC_DOT,  KC_SLSH, \
U_NP,    U_NP,    KC_LCTL, KC_SPC,  KC_C,              KC_ENT,  KC_BSPC, KC_DEL,   U_NP,    U_NP

#define MIRYOKU_LAYERMAPPING_GAME( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
KC_TAB,   K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  DF(U_BASE), \
KC_ESC,   K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  KC_QUOT, \
KC_LSFT,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  DF(U_BASE), \
                      K32,  K33,  K34,         K35,  K36,  K37 \
)


// Steno Layer 

#define MIRYOKU_LAYER_STENO \
STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,           STN_ST3, STN_FR,  STN_PR,   STN_LR,  STN_TR, \
STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,           STN_ST4, STN_RR,  STN_BR,   STN_GR,  STN_SR, \
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,             KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO, \
U_NP,    U_NP,    STN_N1,  STN_A,   STN_O,             STN_E,   STN_U,  STN_N2,   U_NP,    U_NP

#define MIRYOKU_LAYERMAPPING_STENO( \
      K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09, \
      K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19, \
      K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29, \
      N30,  N31,  K32,  K33,  K34,         K35,  K36,  K37,  N38,  N39 \
) \
LAYOUT_split_3x6_3( \
XXX,   K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  STN_DR, \
XXX,   K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  STN_ZR, \
XXX,   K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  DF(U_BASE), \
                   K32,  K33,  K34,         K35,  K36,  K37 \
)
