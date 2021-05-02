#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

int main(void){

    Init_LED(); //Initialising pins for LED and button
    Init_ADC(); //Initialising ADC
    Init_Timer_PWM(); //Initialising the  Timer1 registers PWM
    Init_UART(103); //Initialising  registers for UART

    uint16_t temperature;
    char temperature_value;
    while(1){
        if(BUTTON_ON){
            if(HEATER_ON){
                SET_LED;
                temperature=ReadADC(0);
                temperature_value=PWM_output(temperature);
                UARTWriteChar(temperature_value);
                _delay_ms(50);
            }else{
                CLEAR_LED;
                OCR1A=0;
                _delay_ms(50);
            }
        }else{
                CLEAR_LED;
                OCR1A=0;
                _delay_ms(50);           
        }
    }
    return 0;
}