#include <stdio.h>
#include <gb/gb.h>

void main() {
    while(1) {
        printf("Press Start\n\n");
        waitpad(J_START);

        printf("Please hold down A!\n\n");
        waitpad(J_A);
        printf("Holding down A!\n\n");
        waitpadup();
        printf("Tired already?\n\n\n");
    }
}
