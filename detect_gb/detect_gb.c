#include <gb/gb.h>
#include <stdio.h>

extern UBYTE _cpu;

void main() {
	switch (_cpu) {
	case 0x01:
		printf("DMG or SGB");
		break;
	case 0xFF:
		printf("POCKET or SGB2");
		break;
	case 0x11:
		printf("COLOR");
		break;
	default:
		printf("GBA or OTHER");
		break;
	}
}