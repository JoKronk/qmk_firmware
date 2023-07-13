/* Copyright 2022 splitkb.com <support@splitkb.com>
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

#ifdef RGBLIGHT_ENABLE
#   define RGBLIGHT_EFFECT_BREATHING
#endif 

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN 13

//Power LED to CAPS LOCK LED
#define LED_CAPS_LOCK_PIN 24
#define LED_PIN_ON_STATE 0

//Shares layer data to slave side
#define SPLIT_LAYER_STATE_ENABLE


// 1000hz Polling Rate
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12

// Joystick Button Count
#define JOYSTICK_BUTTON_COUNT 32

// Joystick Axes Count
#define JOYSTICK_AXIS_COUNT 6

// Joystick Axes Resolution
#define JOYSTICK_AXIS_RESOLUTION 8

#define DEBOUNCE 3