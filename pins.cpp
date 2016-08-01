/*
 * pins.cpp
 *
 * Created: 7/25/2016 12:45:47 PM
 *  Author: bbraun
 */ 

#include "onyx.h"

 //DDRx, PINx, PORTx, index
_pinDef pinDef[33] = {
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//OFFSET. No pin connection.
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD3}, //1
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD4}, //2
	{(volatile uint8_t *)0x2D, (volatile uint8_t *)0x2C, (volatile uint8_t *)0x2E, PORTE0}, //3
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//4, VCC
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//5, GND
	{(volatile uint8_t *)0x2D, (volatile uint8_t *)0x2C, (volatile uint8_t *)0x2E, PORTE1}, //6
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB6}, //7, XTAL1
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB6}, //8, XTAL2
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD5}, //9
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD6}, //10
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD7}, //11
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB0}, //12
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB1}, //13
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB2}, //14
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB3}, //15
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB4}, //16
	{(volatile uint8_t *)0x24, (volatile uint8_t *)0x23, (volatile uint8_t *)0x25, PORTB5}, //17
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//18, AVCC
	{(volatile uint8_t *)0x2D, (volatile uint8_t *)0x2C, (volatile uint8_t *)0x2E, PORTE2}, //19
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//20, AREF
	{(volatile uint8_t *)NONE, (volatile uint8_t *)NONE, (volatile uint8_t *)NONE, NONE},	//21, GND
	{(volatile uint8_t *)0x2D, (volatile uint8_t *)0x2C, (volatile uint8_t *)0x2E, PORTE3}, //22
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC0}, //23
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC1}, //24
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC2}, //25
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC3}, //26
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC4}, //27
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC5}, //28
	{(volatile uint8_t *)0x27, (volatile uint8_t *)0x26, (volatile uint8_t *)0x28, PORTC6}, //29, RESET
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD0}, //30 
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD1}, //31
	{(volatile uint8_t *)0x2A, (volatile uint8_t *)0x29, (volatile uint8_t *)0x2B, PORTD2}  //32
};

