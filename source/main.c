/*	Author: hlee272
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;

	unsigned char tmpA = 0x00;
	unsigned char light = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA & 0x0F;
	light = 0x00;
	
	if (tmpA == 0x00) {
		light = 0x40;
	}

	else if (tmpA < 3) {
		light = 0x60;
	}

	else if (tmpA < 5) {
		light = 0x70;
	}

	else if (tmpA < 7) {
		light = 0x38;
	}

	else if (tmpA < 10) {
		light = 0x3C;
	}

	else if (tmpA < 13) {
		light = 0x70;
	}

	else {
		light = 0x40;
	}
	
	PORTC = light;
    }
    return 1;
}
