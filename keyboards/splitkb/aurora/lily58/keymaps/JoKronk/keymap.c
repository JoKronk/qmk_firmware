#include QMK_KEYBOARD_H
#include "oled.h"


enum custom_keycodes {      
	GC_LSU = SAFE_RANGE,
	GC_LSD,
	GC_LSL,
	GC_LSR,
	GC_DPU,
	GC_DPD,
	GC_DPL,
	GC_DPR,
	GC_SQU,
	GC_CRO,
	GC_CIR,
	GC_TRI,
	GC_L1,
	GC_L2,
	GC_L3,
	GC_R1,
	GC_R2,
	GC_R3,
	GC_STA,
	GC_SEL,
	GC_HOM
};
	
// Joystick Config
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ENT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SCLN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_MPLY, KC_COMM, KC_N, KC_M, KC_DOT, KC_SLSH, KC_BSPC, KC_LALT, MO(3), KC_LCTL, KC_SPC, MO(1), MO(2), KC_RSFT, KC_RGUI),
	[1] = LAYOUT(KC_GRV, RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_4), RALT(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_LT, KC_PERC, KC_ENT, KC_UP, KC_NO, KC_NO, KC_HOME, KC_RBRC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_END, KC_NUHS, KC_TRNS, RALT(KC_NUBS), RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), KC_MINS, KC_MUTE, LSFT(KC_COMM), KC_NO, KC_NUBS, LSFT(KC_NUBS), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_MPRV, KC_MNXT),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_NO, KC_UP, KC_NO, KC_NO, KC_HOME, KC_RBRC, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_END, KC_NUHS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_MUTE, KC_BSLS, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_NUBS, LSFT(KC_NUBS)),
	[3] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, TG(4), RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, KC_TRNS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, RGB_SPI, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_ENT, KC_BSPC, KC_N, KC_M, KC_LBRC, KC_QUOT, KC_TRNS, KC_NO, KC_NO, RGB_SPD, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[4] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TG(4), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGUI, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_1, KC_1, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LALT, KC_MPLY, KC_COMM, KC_N, KC_M, KC_DOT, KC_1, KC_BSPC, TG(5), KC_LCTL, KC_SPC, KC_SPC, KC_N, KC_ENT, KC_MPRV, KC_MNXT),
	[5] = LAYOUT(GC_STA, KC_NO, KC_NO, KC_NO, KC_NO, GC_HOM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(5), GC_SEL, KC_NO, GC_DPU, KC_NO, KC_NO, KC_NO, KC_NO, GC_SQU, GC_TRI, GC_R1, KC_NO, KC_NO, KC_NO, GC_DPL, GC_DPD, GC_DPR, KC_NO, KC_NO, KC_NO, GC_CRO, GC_CIR, GC_R2, KC_NO, KC_NO, GC_L1, KC_NO, KC_NO, KC_NO, GC_L3, GC_R3, KC_NO, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(6), KC_NO, GC_DPU, GC_DPU, GC_L2, KC_NO, KC_MPRV, KC_MNXT),
	[6] = LAYOUT(GC_STA, KC_NO, KC_NO, KC_NO, KC_NO, GC_HOM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(6), GC_SEL, KC_NO, GC_DPU, KC_NO, KC_NO, KC_NO, KC_NO, GC_SQU, GC_TRI, GC_R1, KC_NO, KC_NO, KC_NO, GC_DPL, GC_DPD, GC_DPR, KC_NO, KC_NO, KC_NO, GC_CRO, GC_CIR, GC_R2, KC_NO, KC_NO, GC_L1, KC_NO, KC_NO, KC_NO, GC_L3, GC_R3, KC_NO, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, GC_DPU, GC_DPU, GC_L2, KC_NO, KC_MPRV, KC_MNXT)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


#ifdef OLED_ENABLE
bool oled_task_user(void) {
	render_oled();
	return false;
}
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (layer_state_is(1)) {
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
  else {
    if (clockwise) {
        tap_code(KC_VOLU);
    } else {
        tap_code(KC_VOLD);
    }
  }
  return false;
}

bool DPU_STATE = false;
bool DPD_STATE = false;
bool DPL_STATE = false;
bool DPR_STATE = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

	switch (keycode) {
		case GC_DPU:
			if (record->event.pressed) {
				DPU_STATE = true;
				if (DPD_STATE) {
					unregister_joystick_button(16);
				}
				else if (_HITBOX_CONTROLLER) {
					register_joystick_button(18);
				}
			} else {
				DPU_STATE = false;
				unregister_joystick_button(18);
				if (DPD_STATE && layer_state_is(_HITBOX_CONTROLLER)) {
					register_joystick_button(16);
				}
			}
			return false;
		case GC_DPD:
			if (record->event.pressed) {
				DPD_STATE = true;
				if (layer_state_is(_HITBOX_CONTROLLER)) {
					if (DPU_STATE) {
						unregister_joystick_button(18);
					} else {
						register_joystick_button(16);
					}
				}
				else if (!DPU_STATE) {
					register_joystick_button(16);
				}
			} else {
				DPD_STATE = false;
				unregister_joystick_button(16);
				if (DPU_STATE && layer_state_is(_HITBOX_CONTROLLER)) {
					register_joystick_button(18);
				}
			}
			return false;
		case GC_DPL:
			if (record->event.pressed) {
				DPL_STATE = true;
				if (DPR_STATE) {
					unregister_joystick_button(17);
				} else {
					register_joystick_button(15);
				}
			} else {
				DPL_STATE = false;
				unregister_joystick_button(15);
				if (DPR_STATE) {
					register_joystick_button(17);
				}
			}
			return false;
		case GC_DPR:
			if (record->event.pressed) {
				DPR_STATE = true;
				if (DPL_STATE) {
					unregister_joystick_button(15);
				} else {
					register_joystick_button(17);
				}
			} else {
				DPR_STATE = false;
				unregister_joystick_button(17);
				if (DPL_STATE) {
					register_joystick_button(15);
				}
			}
			return false;
		case GC_SQU:
			if (record->event.pressed) {
				register_joystick_button(0);
			} else {
				unregister_joystick_button(0);
			}
			return false;
		case GC_CRO:
			if (record->event.pressed) {
				register_joystick_button(1);
			} else {
				unregister_joystick_button(1);
			}
			return false;
		case GC_CIR:
			if (record->event.pressed) {
				register_joystick_button(2);
			} else {
				unregister_joystick_button(2);
			}
			return false;
		case GC_TRI:
			if (record->event.pressed) {
				register_joystick_button(3);
			} else {
				unregister_joystick_button(3);
			}
			return false;
		case GC_L1:
			if (record->event.pressed) {
				register_joystick_button(4);
			} else {
				unregister_joystick_button(4);
			}
			return false;
		case GC_R1:
			if (record->event.pressed) {
				register_joystick_button(5);
			} else {
				unregister_joystick_button(5);
			}
			return false;
		case GC_L2:
			if (record->event.pressed) {
				register_joystick_button(6);
			} else {
				unregister_joystick_button(6);
			}
			return false;
		case GC_R2:
			if (record->event.pressed) {
				register_joystick_button(7);
			} else {
				unregister_joystick_button(7);
			}
			return false;
		case GC_SEL:
			if (record->event.pressed) {
				register_joystick_button(8);
			} else {
				unregister_joystick_button(8);
			}
			return false;
		case GC_STA:
			if (record->event.pressed) {
				register_joystick_button(9);
			} else {
				unregister_joystick_button(9);
			}
			return false;
		case GC_L3:
			if (record->event.pressed) {
				register_joystick_button(10);
			} else {
				unregister_joystick_button(10);
			}
			return false;
		case GC_R3:
			if (record->event.pressed) {
				register_joystick_button(11);
			} else {
				unregister_joystick_button(11);
			}
			return false;
		case GC_HOM:
			if (record->event.pressed) {
				register_joystick_button(12);
			} else {
				unregister_joystick_button(12);
			}
			return false;
		default:
			return true;
	}
};