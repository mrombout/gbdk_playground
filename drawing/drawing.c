#include <gb/gb.h>
#include <gb/drawing.h>

UINT8 x = 1, y = 1, i = 3, j, f;

void main() {
	color(BLACK, WHITE, SOLID);
	circle(100, 60, 30, M_FILL);
	line(40, 40, 50, 50);
	box(120, 125, 125, 135, M_NOFILL);
	plot_point(3, 4);
	gotogxy(18, 15);
	gprintf(":)");

	while (1) {
		if (joypad() == J_UP && y != 0)
			y--;
		if (joypad() == J_DOWN && y != 143)
			y++;
		if (joypad() == J_LEFT && x != 0)
			x--;
		if (joypad() == J_RIGHT && x != 159)
			x++;
		if (joypad() == J_A) {
			waitpadup();
			i++;
			if (i > 3)
				i = 0;
		}
		if (joypad() == J_B) {
			for (j = 0; j < 20; j++) {
				for (f = 0; f < 18; f++) {
					gotogxy(j, f);
					wrtchr(' ');
				}
			}
		}
		plot(x, y, i, SOLID);
		delay(10);
	}
}