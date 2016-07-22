/*
 * adc.cpp
 *
 * Created: 7/20/2016 12:43:42 PM
 *  Author: bbraun
 */ 
 #include "ONYX88.h"

 
ADC_Class::ADC_Class(){
	
 }

 /*! Configures the ADCSRA Register

 En: Enables ADC hardware if true
 IT_en: Enables interrupt upon Conversion Complete
 preScaler: Scales the main clock for the ADC
 */
 void ADC_configure(uint8_t en, uint8_t IT_en, uint8_t preScaler){
	//Reset everything
	ADCSRA = 0;


	//NOT FINISHED YET
 }

 /*!Pre-scales the ADC clock*/
 void ADC_setPrescaler(uint8_t prescaler){
	//Mask off all bits except lower 3
	ADCSRA |= 0x07 & prescaler;
 }

 /*!Selects the voltage source used for ADC reference*/
 void ADC_setVREF(uint8_t refSelect){
	ADMUX |= refSelect << 6;
 }

 /*!Enables/disables the left adjust feature*/
 void ADC_setLeftAdj(uint8_t en){
	if(en)
		ADMUX |= (1<<ADLAR);
	else
		ADMUX &= ~(1<<ADLAR);
 }

 /*!Selects ADC Input Channel

 Selects a channel to be used as the input to the ADC. Only 
 one channel can be used at a time. If another channel is 
 selected while a conversion is in progress, the new channel
 setting will take effect after the conversion is complete. 
 */
 void ADC_setMux(uint8_t channelSelect){
	if(channelSelect == 0x08){ //Internal Temp Sensor
		//Is 1.1V reference enabled?
		if(ADMUX>>6 == 0x03)
			ADMUX |= (0x0F & channelSelect);
	} else 
		ADMUX |= (0x0F & channelSelect);
 }

 /*!Disables digital pin functionalities

 This function completely disables the digital functionality of an analog pin.
 Typically this is to save power and because it is rare for pins to jointly serve 
 a digital and analog function.
 */
 void ADC_disableInputs(uint8_t mask){
	DIDR0 = mask;
 }
 
 /*!Enables the analog comparator input

 It is important to note that in order to enable this function, the
 ADC must be turned off first. It is unknown whether or not this clears
 the previous settings of the ADC hardware.
 */
 void ADC_enAnalogComparator(uint8_t enable){
	if(enable){
		//First disable the ADC (pg.342)
		ADCSRA &= ~(1<<ADEN);

		//Enable Analog Comparator Multiplexer
		ADCSRB |= (1<<ACME);

		//Re-enable ADC
		ADCSRA |= (1<<ADEN);
	} else {
		ADCSRA &= ~(1<<ADEN);
		ADCSRB &= ~(1<<ACME);
		ADCSRA |= (1<<ADEN);
	}
 }

 /*!Enables/Disables the Auto Trigger function*/
 void ADC_setAutoTrigger(uint8_t state){
	if(state)
		ADCSRA |= (1<<ADATE);
	else
		ADCSRA &= ~(1<<ADATE);
 }

 /*!Sets up auto triggered ADC conversion source
 
 Select between 8 different sources/events that can trigger an 
 ADC conversion. (pg.342)

 000 Free Running Mode
 001 Analog Comparator
 010 External Interrupt Request 0
 011 Timer/Counter0 Compare Match A
 100 Timer/Counter0 Overflow
 101 Timer/Counter1 Compare Match B
 110 Timer/Counter1 Overflow
 111 Timer/Counter1 Capture Event
 */
 void ADC_setAutoTriggerSource(uint8_t sourceSelect){
	//Mask off unwanted bits
	ADCSRB |= (0x0F & sourceSelect);
 }

 /*!Returns data from ADC Data Register Low*/
 uint8_t ADC_readLowReg(){
	return ADCL;
 }

 /*!Returns data from ADC Data Register High*/
 uint8_t ADC_readHiReg(){
	return ADCH;
 }