/*	Author: ericluo
 *  Partner(s) Name: Xikang Vingo
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
	DDRB = 0xFF;
	PORTB = 0x00;
  DDRA = 0x00;
  PORTA = 0xFF;
  /* Insert your solution below */
  unsigned char tempinput = 0x00;


  while (1) {
    
    tempinput = PINA;
	  PORTB = tempinput;
    
  }
  return 1;
}
