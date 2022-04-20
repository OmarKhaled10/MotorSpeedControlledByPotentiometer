/*
 * timer.c
 *
 *  Created on: Nov 3, 2020
 *      Author: mrmah
 */

#include"timer.h"

void TIMER0_PWM_init (uint8 duty)
{
	TCCR0=0X6A;
	TCNT0=0;
	OCR0 =duty;
}
