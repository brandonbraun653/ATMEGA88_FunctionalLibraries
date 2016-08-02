/*
 * Atmega88.cpp
 *
 * Created: 7/20/2016 8:23:05 AM
 * Author : bbraun
 */

#include "onyx.h"
/*Notes and Ideas:
1) Use a forced check on the status of a pwm control pin before writing it high.
   If the other mosfet for that phase is on, wait until it shuts off. This can 
   prevent unwanted blown mosfets...

2) Somehow move the pin definitions to PROGMEM space. It eats up RAM.
*/



int main(void)
{
	
	TimerClass Timer1(TIMER1);

    while (1) 
    {
		
    }
}

