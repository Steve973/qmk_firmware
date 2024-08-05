#pragma once

/*
 * NAV_MISC
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  | Ins  | Pscr | Menu |      |      |                    |      | PWrd |  Up  | NWrd | DLine| Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  | LAt  | LCtl |LShift|      | Caps |-------.    ,-------|      | Left | Down | Rigth|  Del | Bspc |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |Shift | Undo |  Cut | Copy | Paste|      |-------|    |-------|      | LStr |      | LEnd |      | Shift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `-----------------------------------'           '------''---------------------------'
 */

#define LAYOUT_NAV_MISC LAYOUT( \
  _______,  _______,  _______,  _______,  _______,  _______,                         _______,  _______,  _______,  _______,  _______,  _______,  \
  _______,  KC_INS,   KC_PSCR,  KC_APP,   XXXXXXX,  XXXXXXX,                         KC_PGUP,  _______,  KC_UP,    _______,  _______,  KC_BSPC,  \
  _______,  KC_LALT,  KC_LCTL,  KC_LSFT,  XXXXXXX,  KC_CAPS,                         KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_DEL,   KC_BSPC,  \
  _______,  KC_UNDO,  KC_CUT,   KC_COPY,  KC_PASTE, XXXXXXX,  _______,     _______,  XXXXXXX,  _______,  XXXXXXX,  _______,  XXXXXXX,  _______,  \
                      _______,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  _______  \
)

#define ENCODER_NAV_MISC { \
    /* Left encoder: RGB value (brightness) */ \
    ENCODER_CCW_CW(RGB_VAD, RGB_VAI), \
    /* Right encoder: Mode cycling */ \
    ENCODER_CCW_CW(RGB_RMOD, RGB_MOD)  \
}
