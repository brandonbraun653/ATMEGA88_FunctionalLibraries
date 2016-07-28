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
//Holds information for each pin used to enable quick look up
struct _pinDef{
	uint8_t DDRx;
	uint8_t PINx;
	uint8_t PORTx;
	uint8_t index;
};



#endif /* PINS_H_ */