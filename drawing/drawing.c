#include <gb/gb.h>
#include <gb/drawing.h>

void main() {
		color(BLACK, WHITE, SOLID);
		circle(100, 60, 30, M_FILL);
		line(40, 40, 50, 50);
		box(120, 125, 125, 135, M_NOFILL);
		plot_point(3,4);
}