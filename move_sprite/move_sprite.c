#include <gb/gb.h>
#include "ufo.h"

void main() {
    int x = 55;
    int y = 75;

    SPRITES_8x8;
    set_sprite_data(0, 0, ufo);
    set_sprite_tile(0, 0);
    move_sprite(0, x, y);

    SHOW_SPRITES;

    while(1) {
        if(joypad() & J_RIGHT) {
            x++;
            move_sprite(0, x, y);
            delay(10);
        }
        if(joypad() & J_LEFT) {
            x--;
            move_sprite(0, x, y);
            delay(10);
        }
        if(joypad() & J_UP) {
            y--;
            move_sprite(0, x, y);
            delay(10);
        }
        if(joypad() & J_DOWN) {
            y++;
            move_sprite(0, x, y);
            delay(10);
        }
    }
}
