#include <stdio.h>
#include <gb/gb.h>

void main(void) {
	printf("A: Send\nB: Receive\n\n");
	_io_out = 1;
	while (1) {
		if (joypad() == J_A) {
			waitpadup();
			send_byte(); // send _io_out
			printf("Sending...\n");
			while (_io_status == IO_SENDING); // Wait for Send
			if (_io_status == IO_IDLE) // If IO status returns to Idle then success
				printf("Sent %d\n", (int)_io_out);
			else
				printf("Error\n"); // Else print error code
			_io_out++;
		}
		if (joypad() == J_B) {
			waitpadup();
			receive_byte(); // receive _io_in
			printf("Receiving...\n");
			while (_io_status == IO_RECEIVING); // Wait for Receive
			if (_io_status == IO_IDLE) // If IO status returns to Idle then success
				printf("Received %d\n", (int)_io_in);
			else
				printf("Error\n"); // Else print error
		}
	}
}