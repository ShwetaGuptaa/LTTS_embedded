#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_

#include <avr/io.h>
#define UART_DATA_NOT_WRITTEN !(UCSR0A & (1<<UDRE0))
#define ENABLE_UART UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0)
#define UART_CHAR_SIZE UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01)

void Init_UART(uint16_t UBRR_val);
void UARTWriteChar(char data);

#endif