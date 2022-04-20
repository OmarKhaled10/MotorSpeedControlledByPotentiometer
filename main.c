/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: Omar Khaled
 */

#include "adc.h"
#include "lcd.h"
#include "motor.h"
#include "timer.h"

int main(void)
{
	uint16 ADC_temp=0,previous=0;
	SET_BIT(SREG,7);
	ADC_init();
	LCD_init();
	MOTOR_init();
	INT1_init();
	LCD_displayString("ADC Value = ");

	while(1)
	{
		previous=ADC_temp;
		ADC_temp=ADC_readChannel(0);

		if ((previous > 1000 )&(ADC_temp<1000))
		{
			LCD_clearScreen();
			LCD_displayString("ADC Value = ");
		}

		LCD_goToRowColumn(0,12);
		LCD_intgerToString(ADC_temp);
		TIMER0_PWM_init(ADC_temp/4);

	}
}
