/*
 * pins.h
 *
 * Created: 7/25/2016 10:18:20 AM
 *  Author: bbraun
 */ 


#ifndef PINS_H_
#define PINS_H_

#include "ONYX88.h"

enum pheripType{
	_TIMER,
	_ADC,
	_SPI,
	_TWI,
	_USART,
	_AC,
	_CLK,
	NONE
};

struct _pinDef{
	uint8_t DATADIR;
	uint8_t PORT_IN;
	uint8_t PORT_OUT;
	uint8_t MASK;
	pheripType TYPE1;
	pheripType TYPE2;
	pheripType TYPE3;
};



#endif /* PINS_H_ */