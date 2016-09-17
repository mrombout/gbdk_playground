#include <gb/gb.h>
#include "cards.c"

void main() {
    SPRITES_8x16;
    set_sprite_data(0, 8, cards);
    set_sprite_tile(0, 0);
    move_sprite(0, 75, 75);
    set_sprite_tile(1, 2);
    move_sprite(1, 75 + 8, 75);
    SHOW_SPRITES;

    while(1) {
        set_sprite_tile(0, 4);
        set_sprite_tile(1, 6);
        delay(500);
        set_sprite_tile(0, 0);
        set_sprite_tile(1, 2);
        delay(500);
    }
}
