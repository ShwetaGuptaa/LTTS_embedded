/*
 */

#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
    DDRB |=(1<<PB0);   //set B0=1
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD1);
    PORTD|=(1<<PD1);


    while(1)
    {
        /*if(!(PIND&(1<<PD0))){ // press switch
           PORTB |=(1<<PB0);
       _delay_ms(2000);
           }else{
        PORTB &=~(1<<PB0);
       _delay_ms(2000);
           }*/


       if(!(PIND&(1<<PD0))) //Checking if the input bit to 0th bit of pind is made 0 from 1 by pressing led
            {

            if(!(PIND&(1<<PD1))) //Checking if the input bit to 1st bit of pinD is made 0 from 1 by pressing led
            {
                _delay_ms(200);
                PORTB|=(1<<PB0); // makes led glow
            }
            else
            {
                _delay_ms(200);
                PORTB&=~(1<<PB0); // makes led off
            }
        }
        else
        {
                _delay_ms(200);
                PORTB&=~(1<<PB0); //makes led off
        }
    }

    return 0;
}
