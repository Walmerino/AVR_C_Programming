#include<avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    DDRB |= (1<<DDB5);    // Direction of pin PB5 set as Output (Arduino PIN 13)

while (1)
    {
    if (PINB & (1<<PINB0))    //read PIN PB0 (Arduino PIN 8)
    {
        PORTB &= ~(1<<PORTB5);    // PB7 is low so LED On
    }
    else
    {
        PORTB |= (1<<PORTB5);    // By default PB7 is high, LED Off
    }
     }
}