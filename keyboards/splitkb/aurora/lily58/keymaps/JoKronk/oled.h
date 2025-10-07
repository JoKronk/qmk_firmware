#pragma once

enum layer_states {
	_BASE,
	_SPECIAL,
	_LIGHTS,
	_HITBOX_KEYBOARD,
	_HITBOX_CONTROLLER,
};

typedef enum {
	neutral,
	hitbox_standard,
	last_input,
	none
} socd_mode;


void render_oled(socd_mode);