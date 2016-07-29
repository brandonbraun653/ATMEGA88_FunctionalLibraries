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
	typedef enum _adcChannel{
		CHANNEL0 = 0x00,
		CHANNEL1 = 0x01,
		CHANNEL2 = 0x02,
		CHANNEL3 = 0x03,
		CHANNEL4 = 0x04,
		CHANNEL5 = 0x05,
		CHANNEL6 = 0x06,
		CHANNEL7 = 0x07,
		TEMPERATURE = 0x08,
		COMPARATOR = 0x09
	} adcChannel;
	
	typedef enum _adcPrescale{
		DIV_0 = 0x00,
		DIV_2 = 0x01,
		DIV_4 = 0x02,
		DIV_8 = 0x03,
		DIV_16 = 0x04,
		DIV_32 = 0x05,
		DIV_64 = 0x06,
		DIV_128 = 0x07
	} adcPrescale;

	typedef enum _resolution{
		_8BIT,
		_10BIT
	} resolution;

	typedef enum _trigSource{
		FREE_RUNNING,
		ANALOG_COMP,
		EXT_INT0,
		TIMER0_COMPA,
		TIMER0_OVF,
		TIMER1_COMPB,
		TIMER1_OVF,
		TIMER1_CAPT
	} trigSource;

	typedef enum _VREF{
		AREF,
		AVCC,
		BG
	} vref;

	typedef enum _outReg{
		LOWER_8,
		UPPER_2
	} result;

	void begin();
	void selectPrescale(adcPrescale prescaler);
	void selectResolution(resolution bitDepth);
	void selectAutoTrigger(trigSource trigger);
	void selectVREF(vref voltageInput);
	void interrupts(uint8_t state);
	void startConversion(adcChannel channel);
	uint8_t readConversion(adcChannel channel, result byte);

	//Constructor
	ADC_Class();

	private:
	//Stores 10bit ADC conversion result in two bytes:
	//conversionResults[channel][x]->[0]=lower 8 bits, [1]=upper 2 bits 
	uint8_t conversionResults[10][2]; 
	resolution currentRes;
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