#include QMK_KEYBOARD_H
#include "oled.h"

/*
READ!
Newest version of QMK MSYS (1.11.0) doesn't currently work.
Use QMK MSYS 1.7.2 for now: https://github.com/qmk/qmk_distro_msys/releases/tag/1.7.2
Rebasing on upstream seems to require QMK MSYS upgrade so I wouldn't recommend it at the moment.

COMPILING!
qmk setup -H [repo_location]
qmk config user.keyboard=splitkb/aurora/lily58
qmk config user.keymap=JoKronk
qmk compile
Double tap reset button on keyboard to enter bootloader.
Drag in the compiled .uf2 file, do this for both sides.

DEBUGGING DONE ON 1.11.0!
LTO_ENABLE=no can be added to rules.mk to make right side work again solo,
but so far the splits don't work together unless you're only compiling with
a keymap.json instead of a keymap.c for some reason.
*/

// Gamepad setup based on: https://github.com/brentaro/QMK_HID_Gamepad_with_SOCD
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
	GC_HOM,
	SOC_TOG //SOCD mode toggle
};

socd_mode SOCDmode = hitbox_standard;
	
// Joystick Config
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
};


// This is the keymaps that gets flashed to the keyboard, use following steps for updates:
// 1. Edit (and downlaod) the layout at https://config.qmk.fm/#/splitkb/aurora/lily58/rev1/LAYOUT
// 2. In QMK MSYS run: qmk json2c -o [file_path_to_output] [file_path_to_input]
// 3. Copy the output layout in here.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SCLN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_DEL, KC_MPLY, KC_COMM, KC_N, KC_M, KC_DOT, KC_SLSH, KC_BSPC, KC_LALT, MO(2), KC_LCTL, KC_SPC, MO(1), KC_ENT, KC_RSFT, KC_RGUI),
	[1] = LAYOUT(KC_GRV, RALT(KC_1), RALT(KC_2), RALT(KC_3), RALT(KC_4), RALT(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_LT, KC_PERC, KC_ENT, KC_UP, KC_NO, KC_NO, KC_HOME, KC_RBRC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_END, KC_NUHS, KC_TRNS, RALT(KC_NUBS), RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0), KC_MINS, KC_MUTE, LSFT(KC_COMM), KC_NO, KC_NUBS, LSFT(KC_NUBS), KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MNXT),
	[2] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, TG(3), KC_F1, KC_F2, KC_F3, KC_F4, KC_TRNS, KC_TRNS, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_TRNS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_F12, RGB_SPI, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, KC_ENT, KC_BSPC, KC_N, KC_M, KC_LBRC, KC_QUOT, KC_TRNS, KC_NO, RGB_M_P, RGB_SPD, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_7, KC_8, KC_9, KC_0, TG(3), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGUI, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_1, KC_1, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, SOC_TOG, KC_MPLY, KC_COMM, KC_N, KC_M, KC_DOT, KC_1, KC_BSPC, TG(4), KC_LCTL, KC_SPC, KC_W, KC_SPC, KC_ENT, KC_MPRV, KC_MNXT),
	[4] = LAYOUT(GC_STA, KC_NO, KC_NO, KC_NO, KC_NO, GC_HOM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(4), GC_SEL, KC_NO, GC_DPU, KC_NO, KC_NO, KC_NO, KC_NO, GC_SQU, GC_TRI, GC_R1, KC_NO, KC_NO, KC_NO, GC_DPL, GC_DPD, GC_DPR, KC_NO, KC_NO, KC_NO, GC_CRO, GC_CIR, GC_R2, KC_NO, KC_NO, GC_L1, KC_NO, KC_NO, KC_NO, GC_L3, GC_R3, SOC_TOG, KC_MPLY, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, GC_DPU, GC_DPU, GC_L2, KC_NO, KC_MPRV, KC_MNXT)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)


#ifdef OLED_ENABLE
bool oled_task_user(void) {
	render_oled(SOCDmode);
	return false;
}
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (layer_state_is(_SPECIAL)) {
    if (clockwise) {
        tap_code(KC_MS_WH_DOWN);
    } else {
        tap_code(KC_MS_WH_UP);
    }
  } else if (layer_state_is(_LIGHTS)) {
    if (clockwise) {
        tap_code16(C(KC_TAB));
    } else {
        tap_code16(S(C(KC_TAB)));
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

	if (layer_state_is(_HITBOX_KEYBOARD)) {
		switch (keycode) {
			case KC_W:
				if (record->event.pressed) {
					DPU_STATE = true;
					switch (SOCDmode) {
						case neutral:
							if (DPD_STATE) {
								unregister_code(KC_S);
							} else {
								register_code(KC_W);
							}
							return false;

						case hitbox_standard:
						case last_input:
							if (DPD_STATE) {
								unregister_code(KC_S);
							}
							register_code(KC_W);
							return false;

						default: //none
							register_code(KC_W);
							return false;
					}
				} else {
					DPU_STATE = false;
					unregister_code(KC_W);
					if (DPD_STATE)
						register_code(KC_S);
				}
				return false;

			case KC_S:
				if (record->event.pressed) {
					DPD_STATE = true;
					switch (SOCDmode) {
						case neutral:
							if (DPU_STATE) {
								unregister_code(KC_W);
							} else {
								register_code(KC_S);
							}
							return false;

						case hitbox_standard:
							if (!DPU_STATE)
								register_code(KC_S);
							return false;

						case last_input:
							if (DPU_STATE) {
								unregister_code(KC_W);
							}
							register_code(KC_S);
							return false;

						default: //none
							register_code(KC_S);
							return false;
					}
				} else {
					DPD_STATE = false;
					unregister_code(KC_S);
					if (DPU_STATE)
						register_code(KC_W);
				}
				return false;

			case KC_A:
				if (record->event.pressed) {
					DPL_STATE = true;
					switch (SOCDmode) {
						case neutral:
						case hitbox_standard:
							if (DPR_STATE) {
								unregister_code(KC_D);
							} else {
								register_code(KC_A);
							}
							return false;

						case last_input:
							if (DPR_STATE) {
								unregister_code(KC_D);
							}
							register_code(KC_A);
							return false;

						default: //none
							register_code(KC_A);
							return false;
					}
				} else {
					DPL_STATE = false;
					unregister_code(KC_A);
					if (DPR_STATE)
						register_code(KC_D);
				}
				return false;

			case KC_D:
				if (record->event.pressed) {
					DPR_STATE = true;
					switch (SOCDmode) {
						case neutral:
						case hitbox_standard:
							if (DPL_STATE) {
								unregister_code(KC_A);
							} else {
								register_code(KC_D);
							}
							return false;

						case last_input:
							if (DPL_STATE) {
								unregister_code(KC_A);
							}
							register_code(KC_D);
							return false;

						default: //none
							register_code(KC_D);
							return false;
					}
				} else {
					DPR_STATE = false;
					unregister_code(KC_D);
					if (DPL_STATE)
						register_code(KC_A);
				}
				return false;

			case SOC_TOG:
				if (record->event.pressed) {
					if (SOCDmode >= none)
						SOCDmode = neutral;
					else 
						SOCDmode += 1;
				}
				return false;

			default:
				return true;
		}
	}

	else {
		switch (keycode) {
			case GC_DPU:
				if (record->event.pressed) {
					DPU_STATE = true;
					switch (SOCDmode) {
						case neutral:
							if (DPD_STATE) {
								unregister_joystick_button(16);
							} else {
							register_joystick_button(18);
							}
							return false;

						case hitbox_standard:
						case last_input:
							if (DPD_STATE) {
								unregister_joystick_button(16);
							}
							register_joystick_button(18);
							return false;

						default: //none
							register_joystick_button(18);
							return false;
					}
				} else {
					DPU_STATE = false;
					unregister_joystick_button(18);
					if (DPD_STATE)
						register_joystick_button(16);
				}
				return false;

			case GC_DPD:
				if (record->event.pressed) {
					DPD_STATE = true;
					switch (SOCDmode) {
						case neutral:
							if (DPU_STATE) {
									unregister_joystick_button(18);
							} else {
								register_joystick_button(16);
							}
							return false;

						case hitbox_standard:
							if (!DPU_STATE)
								register_joystick_button(16);
							return false;

						case last_input:
							if (DPU_STATE) {
								unregister_joystick_button(18);
							}
							register_joystick_button(16);
							return false;

						default: //none
							register_joystick_button(16);
							return false;
					}
				} else {
					DPD_STATE = false;
					unregister_joystick_button(16);
					if (DPU_STATE)
						register_joystick_button(18);
				}
				return false;

			case GC_DPL:
				if (record->event.pressed) {
					DPL_STATE = true;
					switch (SOCDmode) {
						case neutral:
						case hitbox_standard:
							if (DPR_STATE) {
								unregister_joystick_button(17);
							} else {
								register_joystick_button(15);
							}
							return false;

						case last_input:
							if (DPR_STATE) {
								unregister_joystick_button(17);
							}
							register_joystick_button(15);
							return false;

						default: //none
							register_joystick_button(15);
							return false;
					}
				} else {
					DPL_STATE = false;
					unregister_joystick_button(15);
					if (DPR_STATE)
						register_joystick_button(17);
				}
				return false;

			case GC_DPR:
				if (record->event.pressed) {
					DPR_STATE = true;
					switch (SOCDmode) {
						case neutral:
						case hitbox_standard:
							if (DPL_STATE) {
								unregister_joystick_button(15);
							} else {
								register_joystick_button(17);
							}
							return false;

						case last_input:
							if (DPL_STATE) {
								unregister_joystick_button(15);
							}
							register_joystick_button(17);
							return false;

						default: //none
							register_joystick_button(17);
							return false;
					}
				} else {
					DPR_STATE = false;
					unregister_joystick_button(17);
					if (DPL_STATE)
						register_joystick_button(15);
				}
				return false;
				
			case GC_SQU:
				if (record->event.pressed)
					register_joystick_button(0);
				else
					unregister_joystick_button(0);
				return false;

			case GC_CRO:
				if (record->event.pressed)
					register_joystick_button(1);
				else
					unregister_joystick_button(1);
				return false;

			case GC_CIR:
				if (record->event.pressed) 
					register_joystick_button(2);
				else
					unregister_joystick_button(2);
				return false;

			case GC_TRI:
				if (record->event.pressed)
					register_joystick_button(3);
				else
					unregister_joystick_button(3);
				return false;

			case GC_L1:
				if (record->event.pressed)
					register_joystick_button(4);
				else
					unregister_joystick_button(4);
				return false;

			case GC_R1:
				if (record->event.pressed)
					register_joystick_button(5);
				else
					unregister_joystick_button(5);
				return false;

			case GC_L2:
				if (record->event.pressed)
					register_joystick_button(6);
				else
					unregister_joystick_button(6);
				return false;

			case GC_R2:
				if (record->event.pressed)
					register_joystick_button(7);
				else
					unregister_joystick_button(7);
				return false;

			case GC_SEL:
				if (record->event.pressed)
					register_joystick_button(8);
				else
					unregister_joystick_button(8);
				return false;

			case GC_STA:
				if (record->event.pressed)
					register_joystick_button(9);
				else
					unregister_joystick_button(9);
				return false;

			case GC_L3:
				if (record->event.pressed)
					register_joystick_button(10);
				else
					unregister_joystick_button(10);
				return false;

			case GC_R3:
				if (record->event.pressed)
					register_joystick_button(11);
				else
					unregister_joystick_button(11);
				return false;

			case GC_HOM:
				if (record->event.pressed)
					register_joystick_button(12);
				else
					unregister_joystick_button(12);
				return false;

			case SOC_TOG:
				if (record->event.pressed) {
					if (SOCDmode >= none)
						SOCDmode = neutral;
					else 
						SOCDmode += 1;
				}
				return false;

			default:
				return true;
		}
	}
};