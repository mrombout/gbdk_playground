#include <gb/gb.h>
#include <types.h>

#include "sprite.h"
#include "bg.h"

#define X_POS 64
#define Y_POS 96

void render_huge_sprite() {
	UINT8 i, j;
	UINT8 sprite_index;

	set_sprite_tile(0, 1);

	for(i = 0; i < 8; ++i) {
		for(j = 0; j < 5; ++j) {
			sprite_index = i * 5 + j;
			set_sprite_tile(sprite_index, sprite_index);
			move_sprite(sprite_index, X_POS + (j * 8), Y_POS + (i * 8));
		}
	}
}

void load_background() {
	set_bkg_data(0, 1, bg_tile_data);
}

void main() {
	SPRITES_8x8;
	set_sprite_data(0, 40, sprite_tile_data);

	render_huge_sprite();
	load_background();

	SHOW_SPRITES;
	SHOW_BKG;

	while(1) {
		scroll_bkg(1, 0);
		delay(100);
	}
}
