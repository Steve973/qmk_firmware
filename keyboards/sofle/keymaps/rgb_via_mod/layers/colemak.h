#pragma once

/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

#define LAYOUT_COLEMAK LAYOUT( \
  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                            KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_GRV,   \
  KC_ESC,   KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,                            KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_BSPC,  \
  KC_TAB,   KC_A,     KC_R,     KC_S,     KC_T,     KC_D,                            KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,  \
  KC_LSFT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_MUTE,     XXXXXXX,  KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  \
                      KC_LGUI,  KC_LALT,  KC_LCTL,  KC_TRNS,  KC_ENT,      KC_SPC,   KC_TRNS,  KC_RCTL,  KC_RALT,  KC_RGUI \
)

#define ENCODER_COLEMAK { \
    /* Left encoder: Unassigned */ \
    ENCODER_CCW_CW(_______, _______), \
    /* Right encoder: Unassigned */ \
    ENCODER_CCW_CW(_______, _______)  \
}
