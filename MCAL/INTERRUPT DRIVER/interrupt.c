/*
 * interrupt.c
 *
 * Created: 1/24/2023 2:18:35 PM
 *  Author: moham
 */ 

#include "interrupt.h"

/*
	1. initiate the INT0  (EXTERNAL INTERRUPT 0)
	2. make the rising edge make a interrupt request
	3. enable the interrupt
*/

void INT0_init()
{
	GICR |= (1<<6);
	MCUCR = 0x03;
	SREG |= (1<<7);
}
