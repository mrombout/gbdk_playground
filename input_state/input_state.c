#include <stdio.h>
#include <gb/gb.h>

void main() {
    while(1) {
        switch(joypad()) {
            case J_LEFT:
                printf("Left!\n");
                delay(100);
                break;
            case J_RIGHT:
                printf("Right!\n");
                delay(100);
                break;
            case J_UP:
                printf("Up!\n");
                delay(100);
                break;
            case J_DOWN:
                printf("Down!\n");
                delay(100);
                break;
            case J_START:
                printf("Start!\n");
                delay(100);
                break;
            case J_SELECT:
                printf("Select!\n");
                delay(100);
                break;
            case J_A:
                printf("A!\n");
                delay(100);
                break;
            case J_B:
                printf("B!\n");
                delay(100);
                break;
        }
    }
}
