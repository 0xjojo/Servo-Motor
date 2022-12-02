/*
 * ServoMotor.c
 *
 * Created: 11/30/2022 4:53:46 PM
 * Author : gehad
 */ 
#define F_CPU 16000000UL
#include "DIO_int.h"
#include "Servo.h"
#include "TIMER_1_private.h"
#include<util/delay.h>
int main(void)
{
	//TIMER_1_voidInit();
	DIO_voidInit();
	ServoMotor_Init();
	
	//PWM_1_voidGenerate(12);
	ServoMotor_SetDegree(0);
	//DIO_voidSetPinValue(29 , 1);
    /* Replace with your application code */
	//OCR1A = 97;
    while (1) 
    {
		ServoMotor_SetDegree(0);
		_delay_ms(1000);
		ServoMotor_SetDegree(45);
		_delay_ms(1000);
		ServoMotor_SetDegree(90);
		_delay_ms(1000);
		ServoMotor_SetDegree(135);
		_delay_ms(1000);
		ServoMotor_SetDegree(180);
		_delay_ms(1000);
		
    }
}

