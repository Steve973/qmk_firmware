 /* Copyright 2020 Josef Adamcik
  * Modification for VIA support and RGB underglow by Jens Bonk-Wiltfang
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#include QMK_KEYBOARD_H

// Include layer header files
#include "layers/qwerty.h"
#include "layers/colemak.h"
#include "layers/fn_num_symbol.h"
#include "layers/nav_misc.h"

// Include the RGB matrix effects header files
#ifdef RGB_MATRIX_ENABLE
#define RGB_MATRIX_TIMEOUT 0
#define RGB_MATRIX_SLEEP
#define RGB_MATRIX_LED_FLUSH_LIMIT 16
#define RGB_MATRIX_DEFAULT_ON true
#define RGB_MATRIX_DEFAULT_HUE 0
#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#define RGB_MATRIX_DEFAULT_FLAGS LED_FLAG_ALL
#define RGB_TRIGGER_ON_KEYDOWN
#include "rgb/rgb_effects.h"
#include "rgb/rgb_effects_framebuffer.h"
#include "rgb/rgb_effects_reactive.h"
#endif

#define LAYER_COUNT = 4

// Define encoder behavior first
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = ENCODER_QWERTY,
[1] = ENCODER_COLEMAK,
[2] = ENCODER_FN_NUM_SYMBOL,
[3] = ENCODER_NAV_MISC
};
#endif

// Define the keymaps for each layer
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_QWERTY,
[1] = LAYOUT_COLEMAK,
[2] = LAYOUT_FN_NUM_SYMBOL,
[3] = LAYOUT_NAV_MISC
};
