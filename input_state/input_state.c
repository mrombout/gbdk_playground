#include <stdio.h>
#include <gb/gb.h>

void main() {
    while(1) {
        switch(joypad()) {
            case J_LEFT:
                printf("Left!\n");
                break;
            case J_RIGHT:
                printf("Right!\n");
                break;
            case J_UP:
                printf("Up!\n");
                break;
            case J_DOWN:
                printf("Down!\n");
                break;
            case J_START:
                printf("Start!\n");
                break;
            case J_SELECT:
                printf("Select!\n");
                break;
            case J_A:
                printf("A!\n");
                break;
            case J_B:
                printf("B!\n");
                break;
        }
        delay(100);
    }
}
