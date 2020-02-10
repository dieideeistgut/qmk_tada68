#include QMK_KEYBOARD_H

#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))
#define _______ KC_TRNS
#define _BL 0
#define _FL 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BL] = LAYOUT_ansi(
  KC_ESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC,KC_GRV, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS,KC_DEL, \
  MO(_FL), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT,KC_PGUP,  \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,   KC_RSFT,KC_UP,KC_PGDN, \
  KC_LCTL, KC_LALT,KC_LGUI,                KC_SPC,                        KC_RGUI,KC_RCTRL,MO(_FL), KC_LEFT,KC_DOWN,KC_RGHT),

[_FL] = LAYOUT_ansi(
  KC_POWER, KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_INS ,  \
  _______,_______, _______,_______,_______, _______,_______,_______,_______,_______,_______,_______,_______, _______,KC_HOME, \
  _______,_______,_______,LCA(KC_D),LCA(KC_F),_______,_______,_______,_______,_______,_______,_______,        _______,KC_END, \
  _______,_______,BL_BRTG,BL_DEC, BL_TOGG,BL_INC, _______,_______,KC_VOLD,KC_VOLU,KC_MUTE,KC_BTN1, LCA(KC_UP), KC_BTN2, \
  _______,_______,_______,                 _______,               _______,_______,_______,LCA(KC_LEFT), LCA(KC_DOWN),LCA(KC_RIGHT)),

};
