#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_
/**
 * @file Activity1.h
 * @author Shweta Gupta 
 * @brief header file for first activity of button sensor
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

/**
 * @brief Macro
 * 
 */
#define BUTTON_ON !(PIND&(1<<PD0))      // 
#define HEATER_ON !(PIND&(1<<PD1))
#define SET_LED PORTB|=(1<<PB0)
#define CLEAR_LED PORTB&=~(1<<PB0)
#define SET_LED_AS_OUTPUT DDRB|=(1<<PB0)
#define SET_BUTTON_AS_INPUT DDRD&=~(1<<PD0)

#define SET_HEATER_AS_INPUT DDRD&=~(1<<PD1)
#define SET_BUTTON_HIGH PORTD|=(1<<PD0)
#define SET_HEATER_HIGH PORTD|=(1<<PD1)
/**
 * @brief to initialise leds and buttons
 * 
 */
void Init_LED();
#endif