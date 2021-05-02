/**
 * @file Activity2.h
 * @author Shweta Gupta
 * @brief Header file for activity2(ADC temp sensor)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

#include <avr/io.h>

#define ENABLE_ADC_PRESCALE ADCSRA=(1<<ADEN)|(7<<ADPS0)
#define SET_VOLTAGE_REFERENCE ADMUX=(1<<REFS0)

#define SET_ADC_INTERRUPT ADCSRA|=(1<<ADIF)
#define ADC_INTERRUPT_NOT_TRIGGERED !(ADCSRA & (1<<ADIF))
void Init_ADC();
uint16_t ReadADC(uint8_t ch);
#endif