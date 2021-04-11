#include <avr/io.h> 
#define F_CPU 16000000UL
#include <util/delay.h>

/*For this first experiment I'm using the 8 PORTS D of the ATMEGA328p as output.
The code sets all the 8 ports high then low and waits 2000ms one port at a time. */

int main(){

	DDRD = 0xFF; //sets REGISTER D to OUTPUT

	while(1){

		PORTD = 0x01;		//sets the bit 0 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x02;		//sets the bit 1 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x04;		//sets the bit 2 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x08;		//sets the bit 3 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x10;		//sets the bit 4 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x20;		//sets the bit 5 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x40;		//sets the bit 6 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms

		PORTD = 0x80;		//sets the bit 7 of PORTD to high
		_delay_ms(2000);	//sets delay to 2000 ms
		PORTD = 0x00;		//sets all bits of PORTD to low
		_delay_ms(2000);	//sets delay to 2000 ms



	}

	return 0;
}
