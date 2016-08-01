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
	
	//General Functionality
	void pinMode(uint8_t pin, uint8_t type);
	void portMode(uint8_t port, uint8_t value);
	void pinWrite(uint8_t pin, uint8_t value);
	void portWrite(uint8_t port, uint8_t value);
	uint8_t pinRead(uint8_t pin);
	uint8_t portRead(uint8_t port);

	//Specialized Functionality
	void attachInterrupt(uint8_t pin, void(*)(void));
	uint8_t analogRead(uint8_t channelNum);

	//Constructor
	ioClass();
	private:

	void (*attachedFunction)(void);
};



#endif /* IO_H_ */