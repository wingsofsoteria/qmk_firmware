/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"
enum layers {
    WIN_BASE,
    WIN_FN,
    WIN_ALT,
    WIN_ALT2,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_ansi_101(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,   KC_F12,             KC_DEL,   KC_NUM,   KC_SLEP,  _______,    KC_MUTE,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,  KC_EQL,   KC_PSLS,  KC_PAST,    KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,  KC_P4,    KC_P5,    KC_P6,      KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_P0,    KC_PDOT,    KC_PENT),
    [WIN_FN] = LAYOUT_ansi_101(
        _______,            KC_BRID,       KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,    KC_VOLD,  KC_VOLU,            _______,  _______,  _______,  _______,    RGB_TOG,
        _______,TG(WIN_ALT),TG(WIN_ALT2),  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,    _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,       RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  ORGB,     _______,  _______,    _______,  _______,            _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,       RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_END,   _______,  _______,  _______,    _______,
        _______,            _______,       _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                     _______,                                _______,  _______,    _______,  _______,  _______,  _______,            _______,  _______,    _______),
    [WIN_ALT] = LAYOUT_ansi_101(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,   _______,  _______,  _______,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,   _______,  _______,  _______,   _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            KC_RALT,   _______,  KC_UP,    KC_RSFT,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_RCTL,   KC_LEFT,  KC_DOWN,  KC_RIGHT,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,             _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  MO(WIN_FN), _______,  _______,  _______,  _______,             _______,  _______,   _______),
    [WIN_ALT2] = LAYOUT_ansi_101(
        _______,               _______,    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,   _______, _______,     _______,    _______,
        _______,  _______,     _______,    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,   KC_1,    KC_2,        KC_3,       KC_4,
        _______,  _______,     KC_MS_UP,   _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            KC_LALT,   KC_Q,    KC_W,        KC_LSFT,
        _______,  KC_MS_LEFT,  KC_MS_DOWN, KC_MS_RIGHT, _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,            KC_SPC,    KC_A,    KC_S,        KC_D,       KC_E,
        _______,               _______,    _______,     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,             KC_F,    KC_R,        _______,
        _______,  _______,     _______,                                               _______,                                _______,  MO(WIN_FN), _______,  _______,  _______,   _______, KC_MS_BTN1,  KC_MS_BTN2, KC_LCTL),


};

// clang-format on
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_ALT]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_ALT2]  = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};
#endif // ENCODER_MAP_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color(89, RGB_PURPLE);
        rgb_matrix_set_color(72, RGB_PURPLE);
        rgb_matrix_set_color(55, RGB_PURPLE);
        rgb_matrix_set_color(36, RGB_PURPLE);
        rgb_matrix_set_color(17, RGB_PURPLE);
        rgb_matrix_set_color(0, RGB_PURPLE);
    }
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED && keymap_key_to_keycode(layer, (keypos_t){col, row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_PURPLE);
                }
            }
        }
    }
    return false;
}
