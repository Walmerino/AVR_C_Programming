#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

//bitwise operation notation for register and port D

int main(){

	DDRD |= (1<<DDD1)|(1<<DDD3); //sets bit 0 to output

	while(1){

		PORTD |= (1<<PD1)|(1<<PD3); //sets bit 0 and 3 high
		_delay_ms(2000);
		PORTD &= ~(1<<PD1) & ~(1<<PD3); //sets bit 0 and 3 low
		_delay_ms(2000);
	}

	return 0;
}


