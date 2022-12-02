/*
 * TIMER_1_int.h
 *
 * Created: 10/20/2022 3:56:41 PM
 *  Author: gehad
 */ 


#ifndef TIMER_1_INT_H_
#define TIMER_1_INT_H_

#include "STD_types.h"
#include "BIT_math.h"
void TIMER_1_voidInit(void);

void TIMER_1_voidStart(void);

void TIMER_1_voidStop(void);

void TIMER_1_voidSetDelay(u64 Delay_ms);

void PWM_1_voidInit(void);

void PWM_1_voidGenerate(u16 duty_cycle);

void PWM_1_voidStart(void); 
#endif /* TIMER_1_INT_H_ */