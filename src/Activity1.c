/**
 * @file Activity1.c
 * @author Shweta Gupta
 * @brief source code for activity1
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "Activity1.h"

/**
 * @brief function to initialise leds and buttons
 * 
 */


void Init_LED(){
    SET_LED_AS_OUTPUT;   //setting led as output
    SET_BUTTON_AS_INPUT;  // setting button(pinD0) as input
    SET_HEATER_AS_INPUT;  // setting heater button (pinD1) as input
    SET_BUTTON_HIGH;      // setting 1 to   button (pinD1) 
    SET_HEATER_HIGH;     // setting 1 to heater button (pinD1) 
}