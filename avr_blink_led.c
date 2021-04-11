#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

//bitwise operation notation for register and port D

int main(){

	DDRD |= (1<<DDD2); //sets bit 0 to output

	while(1){

		PORTD |= (1<<PD2); //sets bit 0 of PORTD high also could be PORTD |= (1<<PORTD0)
		_delay_ms(2000);
		PORTD ^= ~(1<<PD2); //sets bit 0 of PORTD low also could be PORTD &= ~(1<<PORTD0)
		_delay_ms(2000);

		//Here i've found a problem. Whenever I set any other port high
		//for instance PORTD7, PORTD0 is also high

	}

	return(0);
}