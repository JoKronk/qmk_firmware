#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ENT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SCLN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_MPLY, KC_COMM, KC_N, KC_M, KC_DOT, KC_SLSH, KC_BSPC, KC_LALT, MO(3), KC_LCTL, KC_SPC, MO(1), MO(2), KC_RSFT, KC_RGUI),
	[1] = LAYOUT(KC_GRV, RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_4), RALT(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_LT, KC_PERC, KC_ENT, KC_UP, KC_NO, KC_NO, KC_HOME, KC_RBRC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_END, KC_NUHS, KC_TRNS, RALT(KC_NUBS), RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), KC_MINS, KC_MUTE, LSFT(KC_COMM), KC_NO, KC_NUBS, LSFT(KC_NUBS), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_MPRV, KC_MNXT),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_UP, KC_NO, KC_NO, KC_HOME, KC_RBRC, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_END, KC_NUHS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_MUTE, KC_BSLS, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_NUBS, LSFT(KC_NUBS)),
	[3] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_NO, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, KC_TRNS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, RGB_SPI, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_ENT, KC_BSPC, KC_N, KC_M, KC_LBRC, KC_QUOT, KC_TRNS, KC_NO, KC_NO, RGB_SPD, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




void render_logo_left(void) {
  static const char PROGMEM left_logo[] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x80, 0x80, 0x80, 0xf0, 0xf0, 0x00, 0x80, 0xc0, 0x40, 0x40, 
0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x03, 0x07, 0x05, 0x05, 
0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x05, 0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x0c, 0x04, 0x7c, 0x78, 
0x00, 0x7c, 0x40, 0x40, 0x7c, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xc0, 0x00, 0x00, 0xc0, 0x40, 
0x00, 0x40, 0x40, 0x40, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x07, 0x07, 0x01, 0x00, 
0x02, 0x07, 0x05, 0x05, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0x0c, 0x04, 0x7c, 0x78, 
0x38, 0x7c, 0x54, 0x54, 0x5c, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x40, 
0x40, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x05, 
0x05, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xe0, 0xe0, 0xf0, 0xf8, 0xf8, 0xfc, 0xfc, 0xfc, 0xfe, 0xfe, 
0xfc, 0xfc, 0xfe, 0xfe, 0xfc, 0xfc, 0xf8, 0xf0, 0xe0, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1e, 0x3f, 0x1f, 0x03, 0xe3, 0xf3, 0xf3, 0xfb, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 
0xfd, 0xfc, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xf0, 0xc0, 0x00, 
0x00, 0x04, 0xe0, 0xc0, 0x80, 0xcf, 0x97, 0x07, 0x03, 0x07, 0x8f, 0xc7, 0xc7, 0xe3, 0xc3, 0x03, 
0x07, 0xc7, 0xe7, 0xc7, 0x6b, 0x83, 0xa3, 0xe3, 0xfb, 0x6f, 0xff, 0xe3, 0xf3, 0xf1, 0x0f, 0x00, 
0x00, 0x00, 0x07, 0x1d, 0x79, 0x3f, 0x7c, 0x20, 0x07, 0x0c, 0x0e, 0x1e, 0x1e, 0x0f, 0x04, 0x38, 
0x2e, 0x6f, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xf6, 0xfe, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0xc0, 0x20, 0xf0, 0xf8, 0xc0, 0x00, 0x00, 0x01, 0x03, 0x00, 0x02, 0x03, 
0x23, 0x07, 0x1f, 0x3f, 0x3f, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x1c, 0x1e, 0x03, 0x03, 0x00, 0x00, 0x07, 0x3f, 0xff, 0xff, 0xfc, 0xf8, 0xf0, 0xe0, 0xe0, 0xc0, 
0x80, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x04, 0x18, 0x18, 0x18, 
0x00, 0x00, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x0f, 0x3f, 0xe7, 0x03, 0x83, 0xcf, 
0xff, 0x1f, 0xef, 0xf3, 0xf3, 0xe3, 0xe3, 0xf7, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xfd, 0xff, 0xff, 0xdf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
  };

  oled_write_raw_P(left_logo, sizeof(left_logo));
}
void render_logo_right(void) {
  static const char PROGMEM right_logo[] = {
0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x00, 0x40, 0x40, 0x40, 0x40, 0x00, 
0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1f, 0x03, 0x01, 0x1f, 0x5e, 0x41, 0x7f, 0x3f, 0x08, 0x1d, 0x15, 0x15, 0x1f, 0x00, 
0x00, 0x1f, 0x00, 0x00, 0x7f, 0x11, 0x11, 0x1f, 0x0e, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00, 
0x00, 0x00, 0xe0, 0xf0, 0x50, 0x50, 0x70, 0x60, 0x00, 0xf0, 0x30, 0x10, 0x10, 0x00, 0x00, 0x00, 
0x00, 0xf4, 0x00, 0x00, 0xf0, 0x30, 0x10, 0xf0, 0xe0, 0x10, 0xfc, 0x10, 0x10, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x50, 0x70, 
0x70, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1d, 0x15, 0x15, 
0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0xfe, 0x40, 0xe0, 0x90, 0x00, 0x00, 0xfe, 0x00, 0x80, 0xd0, 0x50, 0x50, 0xf0, 
0x00, 0xe0, 0xf0, 0x10, 0x10, 0xf0, 0xf0, 0x80, 0xd0, 0x50, 0x50, 0xf0, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
0x00, 0x00, 0x05, 0x05, 0x05, 0x07, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xf8, 0xf8, 0x10, 
0x00, 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xf7, 0xff, 0xff, 0xff, 0xdf, 0xc1, 0xe1, 0xe0, 
0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0xe0, 0xe0, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xfc, 0x7f, 0x6f, 0xcf, 0xff, 0xff, 0xff, 0x07, 0x03, 0xe3, 
0xeb, 0xfb, 0xef, 0xef, 0xef, 0x83, 0x01, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x9f, 0x8f, 0x01, 0x01, 0x00, 0x07, 0x9f, 
0xff, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf7, 0x37, 0xb6, 0x97, 0x87, 0xc7, 
0x87, 0x03, 0x01, 0x01, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x3f, 0x7f, 0x3f, 0x1f, 0x0f, 0x0f, 0x0f, 
0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x3c, 0x6e, 0x1f, 0x1f, 0x3f, 0x41, 0x07, 0x36, 0x02, 0x00, 0x00, 0x00, 0x02, 0x77, 0x03, 0x03 
  };

  oled_write_raw_P(right_logo, sizeof(right_logo));
}


#ifdef OLED_ENABLE
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo_left();
    } else {
        render_logo_right();
    }
    return false;
}
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (layer_state_is(0)) {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
  } else if (layer_state_is(1)) {
    if (clockwise) {
        tap_code(KC_MS_WH_DOWN);
    } else {
        tap_code(KC_MS_WH_UP);
    }
  } else if (layer_state_is(2)) {
    if (clockwise) {
        tap_code16(C(KC_TAB));
    } else {
        tap_code16(S(C(KC_TAB)));
    }
  } else if (layer_state_is(3)) {
    if (clockwise) {
        tap_code(KC_PGDN);
    } else {
        tap_code(KC_PGUP);
    }
  }
  return false;
}

