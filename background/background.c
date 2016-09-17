#include <gb/gb.h>

#include "bg_data.c"
#include "bg_data.map"

void main() {
    set_bkg_data(0, 255, tiledata);

    VBK_REG = 1;
    VBK_REG = 0;

    set_bkg_tiles(0, 0, 20, 18, tilemap);

    SHOW_BKG;

    DISPLAY_ON;
}
