#include <stdio.h>
#include <gb/gb.h>

char *saved = (char *)0xa000; // Pointer to memory address
int *num = (int *)0xa001;

void main()

{
	ENABLE_RAM_MBC1; // Enable RAM

	if (saved[0] != 's') { // Check to see if the variable's ever been saved before
		num[0]=0; // Assign the variable an initial value
		saved[0] = 's'; // Assign saved an 's' value so the if statement isn't executed on next load
	}

	printf("The value of num is: %d\n", num[0]);

	num[0]++; // Increment so on next load there's a new number

	DISABLE_RAM_MBC1; // Disable RAM
}
