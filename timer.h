/*
 * timer.h
 *
 * Created: 7/22/2016 11:16:58 AM
 *  Author: bbraun
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "onyx.h"

class TimerClass{
	public:
	void initialize(uint8_t mode);
	
	void setCompareValue(uint8_t value);
	void readCounter16Bit(uint8_t *storageBuffer);
	uint8_t readCounter8Bit();

	//Constructor
	TimerClass(uint8_t instance);

	private:
	uint8_t _timer;

	void setPrescaler(uint8_t instance, uint8_t prescale);
};



#endif /* TIMER_H_ */