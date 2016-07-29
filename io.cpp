/*
 * io.cpp
 *
 * Created: 7/22/2016 11:34:53 AM
 *  Author: bbraun
 */ 

#include "onyx.h"

 /*! A simple function to set the pin use mode.

Options to set the state of the pin are:
1) OUTPUT
	A standard 5V totem pole output pin that can source or sink 20mA. Status of 
	the pin state (as programmed, not voltage level) can be read from pinRead().
2) INPUT
	This is essentially a tri-stated pin that can be read using pinRead()
3) INPUT_PULLUP
	The same as INPUT, but there is an internal pullup resistor that forces
	the pin state High.
 */
 void ioClass::pinMode(uint8_t pin, pinType type){
	
	//Ensure you can't input an invalid pin assignment
	if(pin>MAX_PINS)
		pin = 0;

	switch (type){
	case OUTPUT:
		//Was the previous state INPUT_PULLUP? (pg.107)
		if(!(pinDef[pin].DDRx & (1<<pinDef[pin].index)) && (pinDef[pin].PORTx & (1<<pinDef[pin].index)))
			pinDef[pin].DDRx &= ~(1<<pinDef[pin].index);	//Go to Tri-State mode first (no pull-up)

		else {
			pinDef[pin].DDRx |= (1<<pinDef[pin].index);		//Set as output
			pinDef[pin].PORTx &= ~(1<<pinDef[pin].index);	//Ensure pin in low state
		}
		break;

	case INPUT:
		pinDef[pin].DDRx &= ~(1<<pinDef[pin].index);		//Set as input
		pinDef[pin].PORTx &= ~(1<<pinDef[pin].index);		//Ensure pull-up disabled
		break;

	case INPUT_PULLUP:
		pinDef[pin].DDRx &= ~(1<<pinDef[pin].index);		//Set as input
		pinDef[pin].PORTx |= (1<<pinDef[pin].index);		//Ensure pull-up enabled
		break;
	}
 }

 /*!Writes a pin to a specified value.

 This will write a pin to a specified value using the PORTx register, 
 regardless of whether the pin is an input or an output. This can accomplish
 different functions depending upon which mode the pin is in. Output mode is 
 self-explanatory. Input mode will cause the pull-up resistor to be enabled if 
 written High. 
 */
 void ioClass::pinWrite(uint8_t pin, pinState value){
	//Ensure you can't input an invalid pin assignment
	if(pin>MAX_PINS)
		value = UNDEFINED;

	switch (value)
	{
	case HIGH:
	case ONE:
		pinDef[pin].PORTx |= (1<<pinDef[pin].index);
		break;

	case LOW:
	case ZERO:
		pinDef[pin].PORTx &= ~(1<<pinDef[pin].index);
		break;

	default: break;
	}
 }

 /*! Writes an entire port to a specified value.*/
 void ioClass::portWrite(portType port, uint8_t value){
	switch (port)
	{
	case B:
		PORTB = value & 0xFF;
		break;

	case C:
		PORTC = value & 0x7F;
		break;

	case D:
		PORTD = value & 0xFF;
		break;

	case E:
		PORTE = value & 0x0F;
		break;
	}
 }

 /*! Returns the logical state of the input pin*/
 uint8_t ioClass::pinRead(uint8_t pin){
	//Ensure you can't input an invalid pin assignment
	if(pin>MAX_PINS)
		pin = 0;

	return (pinDef[pin].PINx & (1<<pinDef[pin].index));
 }

 /*! Returns the logical state of a whole port*/
 uint8_t ioClass::portRead(portType port){
	switch (port)
	{
	case B:
		return PINB;
		break;

	case C:
		return PINC;
		break;

	case D:
		return PIND;
		break;

	case E:
		return PINE;
		break;
	
	default:
		return 0;
	}
 }

 /*! Returns analog level of pin from ADC*/
 uint8_t ioClass::analogRead(adcChannel channelNum){
	return 0;
 }


 void ioClass::attachInterrupt(uint8_t pin, void(*function)(void)){
	attachedFunction = function;

	//NOT FINISHED YET
 }

 //Constructor
  ioClass::ioClass(){
	  
  }