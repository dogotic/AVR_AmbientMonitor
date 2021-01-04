/**
 * @file adc.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdint.h>
#include <avr/io.h>
#include "adc.h"

#define sbi(r,p) (r |= (1 << p))
#define cbi(r,p) ( r &= ~(1 << p))

void ADC_Init(void)
{
	sbi(ADCSRA, ADPS2);
	sbi(ADCSRA, ADPS1);
	cbi(ADCSRA, ADPS0);
	sbi(ADCSRA, ADEN);
}

uint16_t ADC_Read(uint8_t channel)
{
	uint8_t low, high;

	// AVCC is reference
	ADMUX = (0x1 << 6) | (channel & 0x07);

	// start the conversion
	sbi(ADCSRA, ADSC);

	// ADSC is cleared when the conversion finishes
	while (bit_is_set(ADCSRA, ADSC));

	// we have to read ADCL first; doing so locks both ADCL
	// and ADCH until ADCH is read.  reading ADCL second would
	// cause the results of each conversion to be discarded,
	// as ADCL and ADCH would be locked when it completed.
	low  = ADCL;
	high = ADCH;


	// combine the two bytes
	return (high << 8) | low;
}