/*
 * TIMER_1_private.h
 *
 * Created: 10/20/2022 3:58:58 PM
 *  Author: gehad
 */ 


#ifndef TIMER_1_PRIVATE_H_
#define TIMER_1_PRIVATE_H_

#define TCCR1A   (*(volatile u8*)(0x4F))
#define TCCR1B   (*(volatile u8*)(0x4E))
#define OCR1A   (*(volatile u16*)(0x4A))
#define TIMSK   (*(volatile u8*)(0x59))
#define SREG   (*(volatile u8*)(0x5F))
#define ICR1 (*(volatile u16*)(0x46))


#endif /* TIMER_1_PRIVATE_H_ */