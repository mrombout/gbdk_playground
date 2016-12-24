#include <gb/gb.h>
#include <types.h>

#include "sprite.h"
#include "bg.h"

#define SPR_WIDTH 8
#define SPR_HEIGHT 5
#define TOTAL_SPR SPR_WIDTH * SPR_HEIGHT

UINT8 x = 64;
UINT8 y = 96;

void render_huge_sprite() {
	UINT8 i, j;
	UINT8 sprite_index;

	set_sprite_tile(0, 1);

	for(i = 0; i < SPR_WIDTH; ++i) {
		for(j = 0; j < SPR_HEIGHT; ++j) {
			sprite_index = i * SPR_HEIGHT + j;
			set_sprite_tile(sprite_index, sprite_index);
			move_sprite(sprite_index, x + (j * 8), y + (i * 8));
		}
	}
}

void load_background() {
	set_bkg_data(0, 2, bg_tile_data);
	set_bkg_tiles(0, 0, 20, 18, bg_map_data); 
}

void move_huge_sprite(UINT8 nx, UINT8 ny) {
	UINT8 i, lx, ly;
	lx = 0;
	ly = 0;
	for(i = 0; i < 40; i++) {
		if(lx == 40) {
			lx = 0;
			ly += 8;
		}
		move_sprite(i, nx + lx, ny + ly);
		lx += 8;
	}	

}

void move_right() {
	move_huge_sprite(++x, y);
}

void move_left() {
	move_huge_sprite(--x, y);
}

void main() {
	SPRITES_8x8;
	set_sprite_data(0, 40, sprite_tile_data);

	render_huge_sprite();
	load_background();

	SHOW_SPRITES;
	SHOW_BKG;

	while(1) {
		if(joypad() & J_RIGHT) {
			move_right();
		}
		if(joypad() & J_LEFT) {
			move_left();
		}
		delay(10);
	}
}
