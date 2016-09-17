#include <gb/gb.h>
#include <rand.h>
#include <stdio.h>

// bank 0
void vblint(void);

// bank 2
void update_graphics(void);

void do_gameplay(void);

void update_joypad(void);

void update_badguy(void);

void collision_detection(void);

// bank 3
void draw_title_screen(void);

void load_game_tiles(void);

fixed seed;

// main
void main() {
    seed.b.l = DIV_REG;

    SWITCH_ROM_MBC1(3);

    draw_title_screen();

    seed.b.h = DIV_REG;

    initrand(seed.w);

    load_game_tiles();

    disable_interrupts();

    add_VBL(vblint);

    SWITCH_ROM_MBC1(2);
    
    enable_interrupts();
    
    do_gameplay();

    reset();
}

void vblint(void) {
    SWITCH_ROM_MBC1(2);

    update_graphics();
}

