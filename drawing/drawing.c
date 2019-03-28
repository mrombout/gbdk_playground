#include <gb/gb.h>
#include <gb/drawing.h>

UINT8 x = 1, y = 1, i = 3, j, f;

void main() {
	color(BLACK, WHITE, SOLID); //  forecolor, backcolor, mode [Colors: WHITE (0), LTGREY (1), DKGREY(2), BLACK (3)]
	circle(100, 60, 30, M_FILL); // x, y, radius, style (M_FILL or M_NOFILL)
	line(40, 40, 50, 50); // x1, y1, x2, y2
	box(120, 125, 125, 135, M_NOFILL); // x1, y1, x2, y2, style (M_FILL or M_NOFILL)
	plot_point(3, 4); // Plot a single pixel on the screen
	gotogxy(18, 15); // Places you at these coordinates
	gprintf("Hi"); // When using the drawing library you must use gprintf instead of printf

	while (1) {
		if (joypad() == J_UP && y != 0)
			y--;
		if (joypad() == J_DOWN && y != 143)
			y++;
		if (joypad() == J_LEFT && x != 0)
			x--;
		if (joypad() == J_RIGHT && x != 159)
			x++;
		if (joypad() == J_A) { // Change colors
			waitpadup();
			i++;
			if (i > 3)
				i = 0;
		}
		if (joypad() == J_B) { // Function to 'clear' the screen
			for (j = 0; j < 20; j++) { // GB screen is 20 columns wide and 18 columns tall
				for (f = 0; f < 18; f++) { 
					gotogxy(j, f);
					wrtchr(' '); // Use wrtchr to place a character when using the drawing library
				}
			}
		}
		plot(x, y, i, SOLID); // Draws a pixel on the screen (x, y, color, mode)
		delay(10);
	}
}