/* Copyright 2021 Dane Evans
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

#pragma once

// Save some space because we are using even less than 8 layers
#define LAYER_STATE_8BIT

// This keyboard has no music
#define NO_MUSIC_MODE

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

