/*
 * io.h
 *
 * Created: 7/22/2016 11:34:30 AM
 *  Author: bbraun
 */ 


#ifndef IO_H_
#define IO_H_

#include "onyx.h"

class ioClass : public ADC_Class{
	public:
	void pinMode(uint8_t pin, uint8_t direction);
	void fastWrite(uint8_t pin, uint8_t mode);
	uint8_t fastRead(uint8_t port);

	//Constructor
	ioClass();

	private:

	
};


#endif /* IO_H_ */