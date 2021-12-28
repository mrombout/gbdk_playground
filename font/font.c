#include <stdio.h> 
#include <gb/gb.h>
#include <gbdk/font.h>

void main() {
	font_init(); // Initialize font
	font_set(font_load(font_spect)); // Set and load the font
	printf("New font!");
}
