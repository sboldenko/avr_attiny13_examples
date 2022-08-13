/*
Author: sboldenko
Data  : 09.08.2022
E-mail: venera.electronica@gmail.com
*/

#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
    uint16_t counter = 0;
    uint8_t value = 0;

    // GPIO
    // PORTB0 = out 1
    // PORTB1 = out 0
    // PORTB2 = out 0
    // PORTB3 = out 0
    // PORTB4 = out 0
    DDRB = 0x00 ;
    PORTB = 0x01;

    // Timer/Counter 0
    TCCR0A = 0x00;
    TCCR0B = 0x01;
    TCNT0 = 0x00;

    while(1)
    {
        if (TCNT0 == 0xFF)
            counter++;

        if (counter == 0x05DC)
        {
            TCNT0 = 0x00;
            counter = 0x00;
            value++;

            if (value == 5)
                value = 0;

            switch (value)
            {
                case 0:
                    PORTB = 0b00000001;
                    break;
                case 1:
                    PORTB = 0b00000010;
                    break;
                case 2:
                    PORTB = 0b00000100;
                    break;
                case 3:
                    PORTB = 0b00001000;
                    break;
                case 4:
                    PORTB = 0b00010000;
                    break;
            }
        }
    }
}