/*
 * pins.cpp
 *
 * Created: 7/25/2016 12:45:47 PM
 *  Author: bbraun
 */ 

 #include "ONYX88.h"

 /*! Array of structs defining pin characteristics.

 Accessing this struct is based on pin number. Index "0" is null and corresponds to no defined pin as the ATMEGA88P pin labelings start at "1".
 This particular struct follows the pinout in the datasheet on pg. 15 for the 32 pin VGFN layout. 

 */
 _pinDef pinDef[] = {
	{PORTB, 0x33}

};