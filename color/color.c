#include <gb/gb.h>
#include <gb/cgb.h> // Include cgb functions

// Background taken from 'background' example
#include "bg_data.c"
#include "bg_data_map.c"

// Sprite taken from 'small_sprite' example
const unsigned char sprite[] =
{
	  0x7E,0x7E,0x99,0x99,0x81,0x81,0xA5,0xA5,
	  0x81,0x81,0xDB,0xDB,0xC3,0xC3,0x3C,0x3C
};

// These palettes replace the default palette with the appropriate colors. See cgb.h for more defined colors.

UWORD bkgPalette[] = {
	RGB_PURPLE, RGB_BLACK, RGB_ORANGE, RGB_BROWN
};

UWORD sprPalette[] = {
	RGB_GREEN, RGB_BLUE, RGB_RED, RGB_YELLOW
};

void main(void){

	set_bkg_palette(0, 1, bkgPalette); // UBYTE first_palette, UBYTE nb_palettes, UWORD *rgb_data
	set_bkg_data(0, 131, tiledata);
	set_bkg_tiles(0, 0, 20, 18, tilemap);
	SHOW_BKG;

	set_sprite_palette(0, 1, sprPalette); // UBYTE first_palette, UBYTE nb_palettes, UWORD *rgb_data
	set_sprite_data(0, 1, sprite);
	set_sprite_tile(0, 0);
	move_sprite(0, 50, 50);
	SHOW_SPRITES;

	DISPLAY_ON;
}