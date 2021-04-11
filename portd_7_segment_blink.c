#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void){
	
	DDRD = 0b11111111;

	while (1) {

		PORTD = 0b00001100; //1 
		_delay_ms(1000);

		PORTD = 0b10110110; //2
		_delay_ms(1000);

		PORTD = 0b10011110; //3
		_delay_ms(1000);

		PORTD = 0b11001100; //4
		_delay_ms(1000);

		PORTD = 0b11011010; //5
		_delay_ms(1000);

		PORTD = 0b11111010; //6
		_delay_ms(1000);

		PORTD = 0b00001110; //7
		_delay_ms(1000);

		PORTD = 0b11111110; //8
		_delay_ms(1000);

		PORTD = 0b11011110; //9
		_delay_ms(1000);

                PORTD = 0b01111110; //0
		_delay_ms(1000);

		PORTD = 0b00000001; //DP
		_delay_ms(1000);

		}

	return 0;
}
