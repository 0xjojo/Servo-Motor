/****************************************/
/*          Author: 0xjojo              */
/*          Date: 30-11-2022            */
/*          Version: 1.0                */
/*          Module: SERVO               */
/****************************************/
#include "BIT_math.h"
#include "STD_types.h"
#include "TIMER_1_int.h"
#include "Servo.h"
void ServoMotor_Init(void)
{
	PWM_1_voidInit();
	PWM_1_voidStart();
}

void ServoMotor_SetDegree(u8 degree)
{
	u16 duty_cycle = 0;
	
	duty_cycle = 3 + (degree * .05);
	
	PWM_1_voidGenerate(duty_cycle);
}