// # Big Sprite
// <div style="text-align: center"><img src="screenshot.png" alt="" /></div>
//
// Renders a big sprite of 16x16. Since the Game Boy hardware does not directly
// support sprites that large 
//
// ## Source
// Start by including `gb/gb.h` this file defines most important functions you
// are going to need when develop Game Boy games.
#include <gb/gb.h>
// The `sprite.c` file defines the sprite data in the form of an unsigned char
// array. Most of the time you want to generate this file using tools such as
// GBTD.
#include "sprite.c"

void main() {
// Set the sprite size to 8x16 pixels, two tiles one above the other. Internally
// sets bit 2 of the LCDC register to 1.
    SPRITES_8x16;
// Loads the tile patterns stored in `sprite` into the Sprite Tile Pattern
// table.
//
// * first parameter `0` determines at which position we should start loading.
// * second parameter `4` determines how many tiles we want to loading
// * third parameter `sprite` sets the variable to load from
//
// This means that we are loading 4 tiles starting at 0 from the variable
// sprite.
    set_sprite_data(0, 4, sprite);
// Tell sprite `0` to display sprite `0`. Since we are loading 8x16 tiles this
// will make sprite 0 show tile `0` and tile `1`.
    set_sprite_tile(0, 0);
// Finally move a sprite to a position that we can see.
    move_sprite(0, 75, 75);

// We want to display a 16x16 sprite. Unfortunately the Game Boy hardware does
// not directly support a sprite that large. So in order to have a sprite of
// that size we are simply displaying two 8x16 tiles next to each other!
//
// Since we've already loaded our entire sprite in line 16 we can now simply
// tell sprite `1` to display our second sprite. Again, since we are displaying
// 8x16 tiles this statement will display tile `2` and tile `3`.
    set_sprite_tile(1, 2);
// In order to form the illusion of a bigger sprite we display the second tile
// directly next to the other simply by offsetting the position 8 pixels to the
// right.
    move_sprite(1, 75 + 8, 75);
// As always, in order for the sprites to display we need to call
// `SHOW_SPRITES` once.
    SHOW_SPRITES;
}
