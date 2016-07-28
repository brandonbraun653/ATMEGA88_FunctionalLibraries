/*
 * pins.cpp
 *
 * Created: 7/25/2016 12:45:47 PM
 *  Author: bbraun
 */ 

#include "onyx.h"

 //DDRx, PINx, PORTx, index
_pinDef pinDef[33] = {
	{NONE, NONE, NONE, NONE},	 //OFFSET. No pin connection.
	{DDRD, PIND, PORTD, PORTD3}, //1
	{DDRD, PIND, PORTD, PORTD4}, //2
	{DDRE, PINE, PORTE, PORTE0}, //3
	{NONE, NONE, NONE, NONE},	 //4, VCC
	{NONE, NONE, NONE, NONE},	 //5, GND
	{DDRE, PINE, PORTE, PORTE1}, //6
	{DDRB, PINB, PORTB, PORTB6}, //7, XTAL1
	{DDRB, PINB, PORTB, PORTB6}, //8, XTAL2
	{DDRD, PIND, PORTD, PORTD5}, //9
	{DDRD, PIND, PORTD, PORTD6}, //10
	{DDRD, PIND, PORTD, PORTD7}, //11
	{DDRB, PINB, PORTB, PORTB0}, //12
	{DDRB, PINB, PORTB, PORTB1}, //13
	{DDRB, PINB, PORTB, PORTB2}, //14
	{DDRB, PINB, PORTB, PORTB3}, //15
	{DDRB, PINB, PORTB, PORTB4}, //16
	{DDRB, PINB, PORTB, PORTB5}, //17
	{NONE, NONE, NONE, NONE},	 //18, AVCC
	{DDRE, PINE, PORTE, PORTE2}, //19
	{NONE, NONE, NONE, NONE},	 //20, AREF
	{NONE, NONE, NONE, NONE},	 //21, GND
	{DDRE, PINE, PORTE, PORTE3}, //22
	{DDRC, PINC, PORTC, PORTC0}, //23
	{DDRC, PINC, PORTC, PORTC1}, //24
	{DDRC, PINC, PORTC, PORTC2}, //25
	{DDRC, PINC, PORTC, PORTC3}, //26
	{DDRC, PINC, PORTC, PORTC4}, //27
	{DDRC, PINC, PORTC, PORTC5}, //28
	{DDRC, PINC, PORTC, PORTC6}, //29, RESET
	{DDRD, PIND, PORTD, PORTD0}, //30 
	{DDRD, PIND, PORTD, PORTD1}, //30
	{DDRD, PIND, PORTD, PORTD2}  //32
};

