/* Blinker Demo */

// ------- Preamble -------- //
#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h>                     /* Functions to waste time */
#include <avr/interrupt.h>
#include <avr/power.h>
#include "USART.h"

// -------- Inits --------- //
int main(void) {

	DDRB |= (1 << PB0); /* Data Direction Register B:
	 writing a one to the bit
	 enables output. */

	// ------ Event loop ------ //
	while (1) {

		PORTB = 0b00000001; /* Turn on first LED bit/pin in PORTB */

		_delay_ms(0.025); /* wait */

		PORTB = 0b00000000; /* Turn off all port B pins, including LED */

		_delay_ms(0.075); /* wait */

	} /* End event loop */

	return (0); /* This line is never reached */

}
