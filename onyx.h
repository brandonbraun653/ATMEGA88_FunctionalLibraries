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

#endif /* ONYX88_H_ */