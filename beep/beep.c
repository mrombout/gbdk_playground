#include <gb/gb.h>
#include <gb/drawing.h>

void main() {
    NR50_REG = 0xFF;
    NR51_REG = 0xFF;
    NR52_REG = 0x80;
    
    gotogxy(1, 1);
    gprintf("====== Beep ======");
    
    gotogxy(2, 3);
    gprintf("Press any button");
    
    while(1) {
        UBYTE joypad_state = joypad();
        
        if(joypad_state) {        
            NR10_REG = 0x38U;
            NR11_REG = 0x70U;
            NR12_REG = 0xE0U;
            NR13_REG = 0x0AU;
            NR14_REG = 0xC6U;

            NR51_REG |= 0x11;
            
            delay(200);
        }
    }
}

