/* 
 * File:   uart.h
 * Author: ben
 *
 * Created on August 12, 2022, 4:36 PM
 */

#ifndef UART_H
#define	UART_H

#include <avr/io.h>
#include "../main.h"

#define UART_NORMAL_MODE 16
#define UART_DOUBLE_SPEED_MODE 8

#define USART0_BAUD_RATE(BAUD_RATE) ((float)(F_CPU * 64 / (UART_NORMAL_MODE * (float)BAUD_RATE)) + 0.5)

#ifdef	__cplusplus
extern "C" {
#endif

    void uart0_init();
    
    void uart0_send_char(char value);
    
    void uart0_send_string(char *string);
    
    void uart0_print_u8(uint8_t value);
    
    void uart0_print_u16(uint16_t value);
    
    void uart0_print_s16(int16_t value);
    
#ifdef	__cplusplus
}
#endif

#endif	/* UART_H */

