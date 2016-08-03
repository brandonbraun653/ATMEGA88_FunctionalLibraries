/*
 * timer.h
 *
 * Created: 7/22/2016 11:16:58 AM
 *  Author: bbraun
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "onyx.h"

/*****TIMER DEFINITIONS*****/
//Available Instances
#define TIMER0	0x00	//8 Bit
#define TIMER1	0x01	//16 Bit
#define TIMER2	0x02	//8 Bit

//Generic register definitions that apply to all 3 timers
#define COUNTER_VALUE_REG		0x00
#define COUNTER_VALUE_REG_H		0x01
#define COUNTER_VALUE_REG_L		0x02
#define OUTPUT_COMPARE_REG_A	0x03
#define OUTPUT_COMPARE_REG_B	0x04
#define INTERRUPT_MASK_REG		0x05
#define INTERRUPT_FLAG_REG		0x06
#define GENERAL_TIMER_CTRL_REG	0x07
#define CONTROL_REG_A			0x08
#define CONTROL_REG_B			0x09
#define CONTROL_REG_C			0x0A
#define INPUT_CAPTURE_REG_H		0x0B
#define INPUT_CAPTURE_REG_L		0x0C
#define OUTPUT_COMPARE_REG_AH	0x0D
#define OUTPUT_COMPARE_REG_AL	0x0E
#define OUTPUT_COMPARE_REG_BH	0x0F
#define OUTPUT_COMPARE_REG_BL	0x10

//Timer Modes
#define TIMER_MODE_NORMAL	0x00
#define TIMER_MODE_CTC		0x01
#define TIMER_MODE_FASTPWM  0x02
#define TIMER_MODE_PHASEPWM 0x03

//Timer Compare Output Modes
#define TCO_MODE_NORMAL	0x00
#define TCO_MODE_TOGGLE 0x01
#define TCO_MODE_CLEAR  0x02
#define TCO_MODE_SET	0x03

//Pre-Scaler
#define TCNT_NO_CLOCK	0x00
#define TCNT_DIV1		0x01
#define TCNT_DIV8		0x02
#define TCNT_DIV32		0x03
#define TCNT_DIV64		0x04
#define TCNT_DIV256		0x05
#define TCNT_DIV1024	0x06


class TimerClass{
	public:
	void initialize(uint8_t mode);

	//Constructor
	TimerClass(uint8_t instance);

	private:
	uint8_t _timer;

	
	void resetPrescaler(uint8_t instance);
	void config_Prescaler(uint8_t instance, uint8_t prescale);
	void config_ClockSelect(uint8_t instance, uint8_t clkSel);
	void config_CompareOutputMode(uint8_t instance, uint8_t mode);
	void config_WaveformGeneration(uint8_t instance, uint8_t mode);
	void config_Interrupts(uint8_t instance, uint8_t configuration);

	void synchronizeTimers(uint8_t sync);
	void forceOutputCompare(uint8_t instance, uint8_t channel);
	void IC_useNoiseCanceler(uint8_t value); //IC = Input Capture
	void IC_edgeSelectMode(uint8_t edgeType); //IC = Input Capture
	
	void writeReg(uint8_t instance, uint8_t reg, uint8_t value);
 uint8_t readReg(uint8_t instance, uint8_t reg);


};



#endif /* TIMER_H_ */