#include <avr/io.h>
#include <util/delay.h>
//#define F_CPU = 16000000
int main(void)
{
	DDRD = 0xFF;
	DDRB = 0xFF;
	

	while (1) {

			PORTB = 0x07; //MAKES THE #0
			PORTD = 0xE0;
			_delay_ms(20000);
			PORTB = 0x03; //MAKES THE #1
			PORTD = 0X00;
			_delay_ms(20000);
			PORTB = 0X06; //MAKES THE #2
			PORTD = 0xD0;
			_delay_ms(20000);
			PORTB = 0x07; //MAKES THE #3
			PORTD = 0x90;
			_delay_ms(20000);
			PORTB = 0x03; //MAKES THE #4
			PORTD = 0x30;
			_delay_ms(20000);
			PORTB = 0x05; //MAKES THE #5
			PORTD = 0xB0;
			_delay_ms(20000);
			PORTB = 0x05; //MAKES THE #6
			PORTD = 0xF0;
			_delay_ms(20000);
			PORTB = 0x07; //MAKES THE #7
			PORTD = 0x00;
			_delay_ms(20000);
			PORTB = 0x07; //MAKES THE #8
			PORTD = 0xF0;
			_delay_ms(20000);
			PORTB = 0x07; //MAKES THE #9
			PORTD = 0xB0;
			_delay_ms(20000);
			PORTB = 0x07; //MAKES THE #A
			PORTD = 0x70;
			_delay_ms(20000);
			PORTB = 0x01; //MAKES THE #B
			PORTD = 0xF0;
			_delay_ms(20000);
			PORTB = 0x04; //MAKES THE #C
			PORTD = 0xE0;
			_delay_ms(20000);
			PORTB = 0x03; //MAKES THE #D
			PORTD = 0xD0;
			_delay_ms(20000);
			PORTB = 0x04; //MAKES THE #E
			PORTD = 0xF0;
			_delay_ms(20000);
			PORTB = 0x04; //MAKES THE #F
			PORTD = 0x70;
			_delay_ms(20000);
			PORTB = 0x08; //MAKES THE #DP
			PORTD = 0x00;
			_delay_ms(20000);
			PORTB = 0x00; //JUMP BACK
			PORTD = 0x00;	


		}

	return 0;
}