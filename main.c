#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"

int main(void){

    Init_LED(); //Initialising pins for LED and button
    Init_ADC(); //Initialising ADC
    Init_Timer_PWM(); //Initialising the  Timer1 registers PWM
    // UARTinit(103); //Initialising  registers for UART

    uint16_t temperature;
    char temperature_value;
    while(1){
        if(BUTTON_ON){
            if(HEATER_ON){
                SET_LED;
                temperature=ReadADC(0);
                temperature_value=PWM_output(temperature);
                _delay_ms(50);
            }else{
                CLEAR_LED;
                _delay_ms(50);
            }
        }else{
                CLEAR_LED;
                _delay_ms(50);           
        }
    }
    return 0;
}