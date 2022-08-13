/*
Author: sboldenko
Data  : 09.08.2022
E-mail: venera.electronica@gmail.com
*/

#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
    // GPIO
    // PORTB0 = out 0
    // PORTB1 = out 0
    // PORTB2 = out 0
    // PORTB3 = out 0
    // PORTB4 = out 0
    DDRB = 0x00 ;
    PORTB = 0x00;

    // Timer/Counter 0
    TCCR0A = 0x00;
    TCCR0B = 0x01;

    while(1)
    {
        PORTB = 0x01;
        _delay_ms(100);
        PORTB = 0x02;
        _delay_ms(100);
        PORTB = 0x04;
        _delay_ms(100);
        PORTB = 0x08;
        _delay_ms(100);
        PORTB = 0x10;
        _delay_ms(100);
    }
}