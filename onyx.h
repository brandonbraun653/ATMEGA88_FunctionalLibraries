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

//Global Class Objects
extern ADC_Class ADC_Controller;
extern TimerClass Timer;
extern TimerClass Timer1;
extern TimerClass Timer2;

//Struct Definitions
extern _pinDef pinDef[];
#endif /* ONYX88_H_ */