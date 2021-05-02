/**
 * @file Activity3.c
 * @author Shweta Gupta
 * @brief source code for activity 3(PWM generation)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity3.h"
#include<avr/io.h>
// #include<string.h>
#include<stdlib.h>

void Init_Timer_PWM(){
SET_TIMER1_PWM;
SET_PRESCALE_TIMER_TO_64;
SET_PWM_AS_OUTPUT;
}


char PWM_output(uint16_t ADC_Value){
char temperature_val;
if(ADC_Value>=0 && ADC_Value<=209){
    OCR1A=205;          //20% duty cycle
    temperature_val=20;

}else if(ADC_Value>=210 && ADC_Value<=509){
        OCR1A=410;          //40% duty cycle
    temperature_val=25;

}else if(ADC_Value>=510 && ADC_Value<=709){
    OCR1A=717;          //70% duty cycle
    temperature_val=29;

}else if(ADC_Value>=710 && ADC_Value<=1024){
    OCR1A=973;          //95% duty cycle
    temperature_val=33;

}else{
    OCR1A=0;          //off
    temperature_val=0;
}
return temperature_val;
}