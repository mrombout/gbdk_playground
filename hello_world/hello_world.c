// # Hello World
// <div style="text-align: center"><img src="screenshot.png" alt="" /></div>
//
// Prints `Hello World!` to the screen using GBDK's `printf` function.
//
// ## Source
// Includes `<gb/gb.h>`. This file contains all Gameboy specific functions.
// It's the one you're going to use the most.
#include <gb/gb.h>
// Includes `<stdio.h>` it contains funtions for basic file/console input and
//output.
#include <stdio.h>
// A C program always starts by calling the `main()` function. If you are
// unfamiliar with this I suggest reading up on C first.
void main() {
// Prints the string `Hello World!` to the screen. Internally it uses the
// background layer to do so as you can see in the VRAM of your favorite
// emulator.
    printf("Hello World!");
// Using `\n` you can create a new line. In this case it is used to create some
// space between the previous sentence and the next.
    printf("\n\nPress Start");
}

