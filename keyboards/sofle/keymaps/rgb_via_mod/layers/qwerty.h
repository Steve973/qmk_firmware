#pragma once

/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

#define LAYOUT_QWERTY LAYOUT( \
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_GRV,   \
  KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                            KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,  \
  KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                            KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  \
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_MUTE,     XXXXXXX,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  \
                      KC_LGUI,  KC_LALT,  KC_LCTL,  MO(2),    KC_ENT,      KC_SPC,   MO(3),    KC_RCTL,  KC_RALT,  KC_RGUI \
)

#define ENCODER_QWERTY { \
    /* Left encoder: Volume control */ \
    ENCODER_CCW_CW(KC_VOLD, KC_VOLU), \
    /* Right encoder: Page up/down */ \
    ENCODER_CCW_CW(KC_PGDN, KC_PGUP)  \
}
