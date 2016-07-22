/*
 * adc.h
 *
 * Created: 7/20/2016 12:43:55 PM
 *  Author: bbraun
 */ 

#include "ONYX88.h"

#ifndef ADC_H_
#define ADC_H_

class ADC_Class{
	public:
	void begin();


	//Constructor
	ADC_Class();

	private:
	
};


/************************************************************************/
/* External Functions                                                   */
/************************************************************************/
 extern void ADC_configure(uint8_t en, uint8_t IT_en, uint8_t preScaler);
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