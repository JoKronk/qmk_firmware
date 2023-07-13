#pragma once

enum layer_states {
	_BASE,
	_SPECIAL,
	_F_KEYS,
	_LIGHT,
	_HITBOX,
	_HITBOX_CONTROLLER,
	_HITBOX_CONTROLLER_OLD
};


void render_oled(void);