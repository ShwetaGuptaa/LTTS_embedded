/**
 * @file Activity2.c
 * @author Shweta Gupta
 * @brief source file for Activity 2 (ADC temp sensor)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity2.h"
/**
 * @brief Initialising prescalar and interrupt flags
 * 
 */
void Init_ADC(){
ENABLE_ADC_PRESCALE;
SET_VOLTAGE_REFERENCE;
}

/**
 * @brief Reading Temp value through ADC
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch){
    // Selecting ADC channel
    ADMUX&=0Xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;
    //start single conversion
    ADCSRA|=(1<<ADSC);
    while(ADC_INTERRUPT_NOT_TRIGGERED);
        SET_ADC_INTERRUPT;
        return(ADC);
    
}