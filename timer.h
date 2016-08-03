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

	void	configurePrescaler(uint8_t instance, uint8_t prescale);
	void	resetPrescaler(uint8_t instance);
	void	selectClock(uint8_t instance, uint8_t clkSel);
	void	synchronizeTimers(uint8_t sync);
	void	configureMode(uint8_t instance, uint8_t mode);
	void	configureWaveformGeneration(uint8_t instance, uint8_t mode);
	void	useICNoiseCanceler(uint8_t value);
	void	edgeSelectIC(uint8_t edgeType);
	uint8_t readICReg(uint8_t reg);
	void	forceOutputCompare(uint8_t instance, uint8_t channel);
	void	writeReg(uint8_t instance, uint8_t reg, uint8_t value);
	void    configureInterrupts(uint8_t instance, uint8_t configuration);


};



#endif /* TIMER_H_ */