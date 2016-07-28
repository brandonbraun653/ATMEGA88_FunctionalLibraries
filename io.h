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
	typedef enum _pinType{
		OUTPUT,
		INPUT,
		INPUT_PULLUP
	} pinType;

	typedef enum _pinState{
		HIGH,
		LOW,
		ONE,
		ZERO,
		UNDEFINED
	} pinState;

	typedef enum _portType{
		B,
		C,
		D,
		E
	} portType;

	//General Functionality
	void pinMode(uint8_t pin, pinType type);
	void pinWrite(uint8_t pin, pinState value);
	void portWrite(portType port, uint8_t value);
	uint8_t pinRead(uint8_t pin);
	uint8_t portRead(portType port);

	//Specialized Functionality
	void attachInterrupt(uint8_t pin, void(*)(void));
	uint8_t analogRead(adcChannel channelNum);

	//Constructor
	ioClass();
	private:

	void (*attachedFunction)(void);
};



#endif /* IO_H_ */