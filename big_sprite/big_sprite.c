#include <gb/gb.h>
#include "sprite.c"

void main() {
    SPRITES_8x16;
    set_sprite_data(0, 8, sprite);
    set_sprite_tile(0, 0);
    move_sprite(0, 75, 75);
    set_sprite_tile(1, 2);
    move_sprite(1, 75 + 8, 75);
    SHOW_SPRITES;
}
