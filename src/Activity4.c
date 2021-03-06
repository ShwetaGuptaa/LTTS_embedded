
/**
 * @file Activity4.c
 * @author Shweta Gupta
 * @brief source code for activity 4 (writing through UART)
 * @version 0.1
 * @date 2021-05-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Activity4.h"

void Init_UART(uint16_t UBRR_val){
    UBRR0L = UBRR_val;
    UBRR0H = (UBRR_val>>8)&(0x00ff);
    UART_CHAR_SIZE;      // 8 bit data
    ENABLE_UART; //enabling Rx and TX of uart with the help of interrupts
}

void UARTWriteChar(char data){

while(UART_DATA_NOT_WRITTEN){

}

UDR0 = data;

}
