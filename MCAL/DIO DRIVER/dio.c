/*
 * dio.c
 *
 * Created: 1/10/2012 11:47:10 PM
 *  Author: mohamed
 */ 

#include "dio.h"

/*
	DIO_init ==> accept pin number, port number & direction then return Nothing
		1.check the port
		2.check the direction
		if it is in so make this pin as input
		and if it is out make the pin an output
*/

void DIO_init(uint8_t pinNum, uint8_t portNum, uint8_t direction)
{
	switch(portNum)
	{
		case PORT_A:
			if(direction == IN)
				CLEAR_BIT(DDRA, pinNum);
			if(direction == OUT)
				SET_BIT(DDRA, pinNum);

		break;
		case PORT_B:
			if(direction == IN)
				CLEAR_BIT(DDRB, pinNum);
			if(direction == OUT)
				SET_BIT(DDRB, pinNum);
		break;
		case PORT_C :
			if(direction == IN)
				CLEAR_BIT(DDRC, pinNum);
			if(direction == OUT)
				SET_BIT(DDRC, pinNum);
		break;
		case PORT_D:
			if(direction == IN)
				CLEAR_BIT(DDRD, pinNum);
			if(direction == OUT)
				SET_BIT(DDRD, pinNum);
		break;
	}
}

/*
	after the initialization DIO_init and the direction is output we use write function  
	DIO_write ==> accept pin number, port number & value then return Nothing
		1.check the port
		2.check the value
		if it is low so make this pin as output and the value = 0
		and if it is High make the pin an output and the value = 1
*/

//WRITE FUN
void DIO_write(uint8_t pinNum, uint8_t portNum, uint8_t value)
{
	switch(portNum)
	{
		case  PORT_A:
			if(value == LOW)
				CLEAR_BIT(PORTA, pinNum);
			if(value == HIGH)
				SET_BIT(PORTA, pinNum);
		break;
		case  PORT_B:
			if(value == LOW)
				CLEAR_BIT(PORTB, pinNum);
			if(value == HIGH)
				SET_BIT(PORTB, pinNum);

		break;
		case  PORT_C:
			if(value == LOW)
				CLEAR_BIT(PORTC, pinNum);
			if(value == HIGH)
				SET_BIT(PORTC, pinNum);

		break;
		case  PORT_D:
			if(value == LOW)
				CLEAR_BIT(PORTD, pinNum);
			if(value == HIGH)
				SET_BIT(PORTD, pinNum);
		break;
	}
	
}

/*
	after the initialization DIO_init and the direction is output we use toggle function  
	DIO_toggle ==> accept pin number& port number then return Nothing
		1.check the port
		and toggle the pin inputed
*/

// TOGGLE
void DIO_toggle(uint8_t pinNum, uint8_t portNum)
{
		switch (portNum)
		{
			case PORT_A:
				TOGGLE_BIT(PORTA,pinNum);
			break;
			case PORT_B:
				TOGGLE_BIT(PORTB,pinNum);
			break;
			case PORT_C:
				TOGGLE_BIT(PORTC,pinNum);
			break;
			case PORT_D:
			TOGGLE_BIT(PORTD,pinNum);
			break;
			default:

			break;
		}
	
}

/*
	after the initialization DIO_init and the direction is input we use read function
	DIO_toggle ==> accept pin number, port number, and pointer to value to store the data in it then return Nothing
		1.check the port
		then save the input data
		
*/

//READING
void DIO_read(uint8_t pinNum, uint8_t portNum,uint8_t *value)
{
	switch (portNum)
	{
		case PORT_A:
			*value = READ_BIT(PINA, pinNum);
		break;
		case PORT_B:
			*value = READ_BIT(PINB, pinNum);
		break;
		case PORT_C:
			*value = READ_BIT(PINC, pinNum);
		break;
		case PORT_D:
			*value = READ_BIT(PIND, pinNum);
		break;	
		default:

		break;
	}
}