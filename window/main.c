#include <gb/gb.h>

#include "bg.c"
#include "bg_map.c"
#include "border.c"
#include "window.c"

void main() {
    set_bkg_data(0, 152, bg_tiledata);
    set_bkg_tiles(0, 0, 20, 18, bg_tilemap);
    
    SHOW_BKG;
    
    set_win_data(152, 9, border);
    set_win_tiles(0, 0, 20, 4, window);
    move_win(7, 112);

    SHOW_WIN;
}