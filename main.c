/* The frequency should be set on */
#define F_CPU 7372800UL



// ------- Preamble -------- //

#include <avr/io.h>                        /* Defines pins, ports, etc */
#include <util/delay.h> /* Functions to waste time */
#include"HD44780.h"

// -------- Inits --------- //

uint8_t home[] = {4, 10, 31, 17, 17, 17, 31, 0};
uint8_t termo[] = {14, 10, 10, 14, 31, 31, 14, 0}; //thermometer

int main(void) {


	LCD_Initialize();

	LCD_ProgrammChar(0, home); //
	LCD_ProgrammChar(1, termo);

	LCD_Clear();

	LCD_WriteData(1); //wyswietlenie wlasnego znaku numer 1.
	LCD_WriteText(" LINE 1");
	LCD_GoTo(0,1); //line 2
	LCD_WriteData(0); //wyswietlenie wlasnego znaku numer 0.
	LCD_WriteText(" LINE 2");

// ------ Event loop ------ //
//
//	while (1) {
//
//	} /* End event loop */

	return (0); /* This line is never reached */

}
