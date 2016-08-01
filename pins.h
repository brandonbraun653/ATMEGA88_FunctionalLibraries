/*
 * pins.h
 *
 * Created: 7/25/2016 10:18:20 AM
 *  Author: bbraun
 */ 


#ifndef PINS_H_
#define PINS_H_

#include "onyx.h"

//Define some macros here like digitalPinToPort and etc.


//Holds information for each pin on the chip. Used to enable quick look up.
struct _pinDef{
	volatile uint8_t* DDRx;
	volatile uint8_t* PINx;
	volatile uint8_t* PORTx;
	volatile uint8_t index;
};



#endif /* PINS_H_ */