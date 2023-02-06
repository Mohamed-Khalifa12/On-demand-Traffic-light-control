/*
 * register.h
 *
 * Created: 1/10/2012 11:47:38 PM
 *  Author: mohamed
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_

#include "typedef.h"
//DIO REGISTERS

//PORTA
#define PORTA (*(volatile uint8_t *)(0x3B))
#define DDRA (*(volatile uint8_t *)(0x3A))
#define PINA (*(volatile uint8_t *)(0x39))

//PORTB
#define PORTB (*(volatile uint8_t *)(0x38))
#define DDRB (*(volatile uint8_t *)(0x37))
#define PINB (*(volatile uint8_t *)(0x36))

//PORTC
#define PORTC (*(volatile uint8_t *)(0x35))
#define DDRC (*(volatile uint8_t *)(0x34))
#define PINC (*(volatile uint8_t *)(0x33))

//PORTD
#define PORTD (*(volatile uint8_t *)(0x32))
#define DDRD (*(volatile uint8_t *)(0x31))
#define PIND (*(volatile uint8_t *)(0x30))

//TIMER REGISTERS
#define TCCR0 (*(volatile uint8_t *)(0x53)) //CONTROL REG OF TIMER 0
#define TCNT0 (*(volatile uint8_t *)(0x52)) //DATA REG OF TIMER 0
#define TIFR (*(volatile uint8_t *)(0x58)) //FLAG REG FOR BOTH TIMERS 1 AND 0
#define TCCR1A (*(volatile uint8_t *)(0x4F)) //CONTROL REG A OF TIMER 1
#define TCCR1B (*(volatile uint8_t *)(0x4E)) //CONTROL REG B OF TIMER 1
#define TCNT1H (*(volatile uint8_t *)(0x4D)) //DATA REG HIGH OF TIMER 1
#define TCNT1L (*(volatile uint8_t *)(0x4C)) //DATA REG LOW OF TIMER 1

//EXTERNAL INTERRUPT REGISTER
#define SREG (*(volatile uint8_t *)(0x5F)) //GLOBAL INTERRUPT *SET I BIT TO ENABLE EXTERNAL INTERRUPT
#define MCUCR (*(volatile uint8_t *)(0x55)) //CONTROLLING INT 0 & 1 SENSTIVE (RISING -FALLING - LEVEL)
#define MCUCSR (*(volatile uint8_t *)(0x54)) //CONTROLLING INT 2 SENSTIVE (RISING - FALLING)
#define GICR (*(volatile uint8_t *)(0x5B)) //ENABING THE EXTERNAL INTERRUPT (0 OR 1 OR 2)
#define GIFR (*(volatile uint8_t *)(0x5A)) //THE INTERRUPT FLAG 

//ADC REGISTERS
#define ADMUX (*(volatile uint8_t *)(0x27)) //CHOOSING THE REFRENCE VOLTAGE, ADJUSTMENT AND PIN OF ADC
#define ADCSRA (*(volatile uint8_t *)(0x26)) //CHOOSING ENABLING, WHEN TO START CONVERSION AND THE PRESCALER. AND READING THE FLAG OF FINISHING CONVERSION
#define ADCH (*(volatile uint8_t *)(0x25)) //ADC DATA HIGH BYTE 
#define ADCL (*(volatile uint8_t *)(0x24)) //ADC DATA LOW BYTE


#endif /* REGISTERS_H_ */
