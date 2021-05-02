#include <avr/io.h>
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"

int main(void){

    Init_LED(); //Initialise pins for LED and button
    Init_ADC(); //Initialise ADC
    // Init_TimerWaveGenMode(); //Initialise the registers for TIMER1 as fast PWM
    // UARTinit(103); //Initialise UART registers

    uint16_t temperature;
    while(1){
        if(BUTTON_ON){
            if(HEATER_ON){
                SET_LED;
                temperature=ReadADC(0);
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