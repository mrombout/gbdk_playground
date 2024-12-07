// # Background
// <div style="text-align: center"><img src="screenshot.png" alt="" /></div>
//
// Renders a full-screen background image.
//
// ## Source

#include <gb/gb.h>

#include "bg_data.c"
#include "bg_data_map.c"

void main() {
// First load the tile patterns in the Background Tile Pattern table. This
// means that we load all the 8x8 images that make up our picture (131 of them
// to be exact).
    set_bkg_data(0, 131, tiledata);

    VBK_REG = 1;
    VBK_REG = 0;

// Then we set the tile pattern in the background tile table. The variable
// `tilemap` contains an array of tile numbers that reference to the the tiles
// we loaded previously using `set_bkg_data`.
//
// Our image is `20` tiles wide and `18` tiles high, thus having a total of 360
// tiles. How is that possible when we only loaded `131` tiles?
//
// Well, that is because some in the image are identical. So instead the tile
// is only saved once in the `tiledata` variable and reused multiple times in
// the `tilemap` variable.
    set_bkg_tiles(0, 0, 20, 18, tilemap);
// In order for the background to actually show up we call `SHOW_BKG`.
    SHOW_BKG;

    DISPLAY_ON;
}
