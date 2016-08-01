/*
 * adc.h
 *
 * Created: 7/20/2016 12:43:55 PM
 *  Author: bbraun
 */ 

#include "onyx.h"

#ifndef ADC_H_
#define ADC_H_

class ADC_Class{
	public:

	void begin();
	void selectPrescale(uint8_t prescaler);
	void selectResolution(uint8_t bitDepth);
	void selectAutoTrigger(uint8_t trigger);
	void selectVREF(uint8_t voltageInput);
	void interrupts(uint8_t state);
	void startConversion(uint8_t channel);
	uint8_t readConversion(uint8_t channel, uint8_t byte);

	//Constructor
	ADC_Class();

	private:
	//Stores 10bit ADC conversion result in two bytes:
	//conversionResults[channel][x]->[0]=lower 8 bits, [1]=upper 2 bits 
	uint8_t conversionResults[10][2]; 
	uint8_t currentRes;
};


/************************************************************************/
/* Exported Functions                                                   */
/************************************************************************/
 extern void ADC_setPrescaler(uint8_t prescaler);
 extern void ADC_setVREF(uint8_t refSelect);
 extern void ADC_setLeftAdj(uint8_t en);
 extern void ADC_setMux(uint8_t channelSelect);
 extern void ADC_disableInputs(uint8_t mask);
 extern void ADC_enAnalogComparator(uint8_t enable);
 extern void ADC_setAutoTriggerSource(uint8_t sourceSelect);
 extern uint8_t ADC_readLowReg();
 extern uint8_t ADC_readHiReg();

#endif /* ADC_H_ */