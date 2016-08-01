/*
 * ONYX88.h
 *
 * Created: 7/22/2016 7:47:25 AM
 *  Author: bbraun
 */ 


#ifndef ONYX88_H_
#define ONYX88_H_

//General Device Dependencies
#include <avr/io.h>

//ATMEGA88 Specific Hardware Libraries
#include "adc.h"
#include "comparator.h"
#include "core_mgmt.h"
#include "define.h"
#include "interrupt.h"
#include "io.h"
#include "pins.h"
#include "spi.h"
#include "timer.h"
#include "twi.h"
#include "usart.h"
#include "watchdog.h"

//Global Class Objects

//Struct Definitions
extern _pinDef pinDef[];


/************************************************************************/
/* Define Statements                                                    */
/************************************************************************/


/******GENERAL IO******/
//Pin Type
#define OUTPUT			0x00
#define INPUT			0x01
#define INPUT_PULLUP	0x02

//Logic State
#define HIGH		0x01
#define LOW			0x00
#define ONE			0xF1
#define ZERO		0xF0
#define UNDEFINED	0xFF

//Port Type
#define B 0x0B
#define C 0x0C
#define D 0x0D
#define E 0x0E


/******ADC******/
//Channel Type
#define	ADC_CHANNEL0	0x00
#define	ADC_CHANNEL1	0x01
#define	ADC_CHANNEL2	0x02
#define	ADC_CHANNEL3	0x03
#define	ADC_CHANNEL4	0x04
#define	ADC_CHANNEL5	0x05
#define	ADC_CHANNEL6	0x06
#define	ADC_CHANNEL7	0x07
#define	ADC_TEMPERATURE 0x08
#define	ADC_COMPARATOR	0x09

//Pre-scaler
#define DIV_0	0x00
#define DIV_2	0x02
#define DIV_4	0x04
#define DIV_8	0x08
#define DIV_16	0x10
#define DIV_32	0x20
#define DIV_64	0x40
#define DIV_128 0x80

//Resolution 
#define _8Bit	0x08
#define _10Bit	0x0A

//Trigger Source
#define FREE_RUNNING	0x00
#define ANALOG_COMP		0x01
#define EXT_INT0		0x02
#define TIMER0_COMPA	0x03
#define TIMER0_OVF		0x04
#define TIMER1_COMPB	0x05
#define TIMER1_OVF		0x06
#define TIMER1_CAPT		0x07

//Voltage Reference
#define AREF 0x00
#define AVCC 0x01
#define BG	 0x02

//Output Result Format
#define LOWER_8 0x08
#define UPPER_2 0x02

#endif /* ONYX88_H_ */