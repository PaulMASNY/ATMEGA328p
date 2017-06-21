/*
 * main.c

 *
 *  Created on: 10 Jun 2017
 *      Author: paul
 */

// POV toy demo framework //

// ------- Preamble -------- //
#include <avr/io.h>
#include <util/delay.h>

// -------- Functions --------- //


int main(void) {

  // -------- Inits --------- //
	DDRB = (1<<PB1);
	DDRB = (1<<PB2);
	DDRB = (1<<PB3);
             /* Data Direction Register B:
                                   writing a one to the bit
                                   enables output. */

  // ------ Event loop ------ //
  while (1) {



	PORTB ^= (1<<PB1);          /* Turn on 2nd LED bit/pin in PORTB */
    _delay_ms(10);                                          /* wait */

    PORTB ^= (1<<PB2);
    _delay_ms(10);                                          /* wait */

    PORTB &= ~((1<<PB1)|(1<<PB2));
    _delay_ms(10);

    PORTB |= ((1<<PB1)|(1<<PB3));
    _delay_ms(10);

    PORTB &= ~(1<<PB3);
    _delay_ms(10);


      }                                                  /* End event loop */
      return (0);                            /* This line is never reached */
    }
