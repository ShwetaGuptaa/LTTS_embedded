/**
 * @file Activity3.h
 * @author Shweta Gupta
 * @brief header file for activity 3(PWM generation)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY3_H_
#define _ACTIVITY3_H_

#include <avr/io.h>

#define SET_TIMER1_PWM TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11)
#define SET_PRESCALE_TIMER_TO_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10)
#define SET_PWM_AS_OUTPUT DDRB|=(1<<PB1)
/**
 * @brief to initialise timers and prescale for PWM
 * 
 */
void Init_Timer_PWM();
/**
 * @brief to output PWM according to the ADC value
 * 
 * @param ADC_Value 
 * @return char 
 */
char PWM_output(uint16_t ADC_Value);
#endif