#include <gb/gb.h>
#include <gb/drawing.h>
#include <rand.h>

const UBYTE badguy_ai[] = {
    32,  32,  33,  34,  35,  35,  36,  37,
    38,  38,  39,  40,  41,  41,  42,  43,
    44,  44,  45,  46,  46,  47,  48,  48,
    49,  50,  50,  51,  51,  52,  53,  53,
    54,  54,  55,  55,  56,  56,  57,  57,
    58,  58,  58,  59,  59,  60,  60,  60,
    61,  61,  61,  61,  62,  62,  62,  62,
    62,  63,  63,  63,  63,  63,  63,  63,
    63,  63,  63,  63,  63,  63,  63,  63,
    62,  62,  62,  62,  62,  61,  61,  61,
    61,  60,  60,  60,  59,  59,  59,  58,
    58,  57,  57,  56,  56,  55,  55,  54,
    54,  53,  53,  52,  52,  51,  50,  50,
    49,  49,  48,  47,  47,  46,  45,  44,
    44,  43,  42,  42,  41,  40,  39,  39,
    38,  37,  36,  36,  35,  34,  33,  33,
    32,  31,  30,  29,  29,  28,  27,  26,
    26,  25,  24,  23,  23,  22,  21,  20,
    20,  19,  18,  18,  17,  16,  16,  15,
    14,  14,  13,  12,  12,  11,  11,  10,
    9,  9,  8,  8,  7,  7,  6,  6,
    6,  5,  5,  4,  4,  4,  3,  3,
    3,  2,  2,  2,  1,  1,  1,  1,
    1,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,
    1,  1,  1,  1,  1,  1,  2,  2,
    2,  3,  3,  3,  4,  4,  4,  5,
    5,  5,  6,  6,  7,  7,  8,  8,
    9,  9,  10,  11,  11,  12,  12,  13,
    14,  14,  15,  16,  16,  17,  18,  18,
    19,  20,  20,  21,  22,  23,  23,  24,
    25,  26,  26,  27,  28,  29,  29,  30
};

UBYTE playing, joypad_state;

UBYTE player_x, player_y;

UBYTE badguy_x, badguy_y, badguy_z, badguy_offset;

UBYTE player_shot_x, player_shot_y, player_shot_z;

void update_graphics(void) {
    disable_interrupts();
    
    scroll_bkg(1, 0);

    move_sprite(0, player_x, player_y);

    move_sprite(1, badguy_x, badguy_y);

    move_sprite(2, player_shot_x, player_shot_y);

    enable_interrupts();
}

void update_joypad(void) {    
    joypad_state = joypad();
    
    if(joypad_state & J_LEFT) {
        if(player_x > 8)
            player_x--;
    }
    if(joypad_state & J_RIGHT) {
        if(player_x < 160)
            player_x++;
    }
    if(joypad_state & J_UP) {
        if(player_y > 16)
            player_y--;
    }
    if(joypad_state & J_DOWN) {
        if(player_y < 152)
            player_y++;
    }

    if(joypad_state & J_A) {
        if(player_shot_z == 0) {
            player_shot_z = 1;
            player_shot_x = player_x;
            player_shot_y = player_y;
        }
    }
    if(player_shot_z == 1) {
        player_shot_x = player_shot_x + 2;
        if(player_shot_x > 240) {
            player_shot_x = 250;
            player_shot_y = 250;
            player_shot_z = 0;
        }
    }
}

void update_badguy(void) {
    badguy_x = badguy_x - 1;
    if(badguy_x > 240) {
        badguy_offset = rand();
        while(badguy_offset > 134) {
            badguy_offset = rand();
        }

        badguy_x = 239;
    }

    badguy_y = badguy_offset + badguy_ai[badguy_z];

    badguy_z++;
}


void collision_detection(void) {
    if(player_shot_y > badguy_y - 4) {
        if(player_shot_y < badguy_y + 4) {
            if(player_shot_x > badguy_x - 4) {
                if(player_shot_x < badguy_x + 4) {
                    player_shot_z = 0;
                    player_shot_x = 250;
                    player_shot_y = 250;
                    badguy_x = 255;
                }
            }
        }
    }

    if(player_y > badguy_y - 4) {
        if(player_y < badguy_y + 4) {
            if(player_x > badguy_x - 4) {
                if(player_x < badguy_x + 4) {
                    playing = 0;
                    delay(1000);
                }
            }
        }
    }
}

void do_gameplay(void) {
    playing = 1;
    
    player_x = GRAPHICS_WIDTH / 2;
    player_y = GRAPHICS_HEIGHT / 2;

    while(playing == 1) {       
        update_joypad();
        update_badguy();
        collision_detection();
        delay(10);
    }
}
