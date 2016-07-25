/*
 * io.h
 *
 * Created: 7/22/2016 11:34:30 AM
 *  Author: bbraun
 */ 


#ifndef IO_H_
#define IO_H_

#include "ONYX88.h"


void digitalWrite(uint8_t pin, uint8_t state);
void fastWrite(uint8_t port, uint8_t mask);
uint8_t digitalRead(uint8_t pin);
uint8_t fastRead(uint8_t port, uint8_t pin);


#endif /* IO_H_ */