/*
 * TIMER_1_prog.c
 *
 * Created: 10/20/2022 4:00:10 PM
 *  Author: gehad
 */ 
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "DIO_private.h"
#include "TIMER_1_int.h"
#include "TIMER_1_config.h"
#include "TIMER_1_private.h"

void TIMER_1_voidInit(void)
{
	TCCR1B |= 0x08;
	TIMSK  |= 0x10;
	SREG   |= 0x80;
}

void TIMER_1_voidStart(void)
{
	TCCR1B |= 0x05;
}

void TIMER_1_voidStop(void)
{
	CLEAR_BIT(TCCR1B,0);
	CLEAR_BIT(TCCR1B,1);
	CLEAR_BIT(TCCR1B,2);
}

void TIMER_1_voidSetDelay(u64 Delay_ms)
{
	if(Delay_ms <= 4000)
	{
		u8 Tick_Time = 1024 / 16;
		u32 Num_Ticks = (Delay_ms * 1000)/Tick_Time;
		OCR1A = Num_Ticks - 1;
	}
}
void PWM_1_voidInit(void)
{
	DDRD |= 0x20;
	TCCR1A |= 0xA2 ;
	TCCR1B |= 0x18 ;
	ICR1 = 1250 ;
}

void PWM_1_voidGenerate(u16 duty_cycle)
{
	OCR1A = ((duty_cycle * 1250)/100) - 1;
}

void PWM_1_voidStart(void)
{
	TCCR1B |= 0x04 ;
}