#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#define LED_ON 	PORTD |= (1<<PORTD0)
#define LED_OFF PORTD &= ~(1<<PORTD0)
#define BUTTON_TOGGLE PIND |= (1<<PIND5)

int main(){

	DDRD |= (1<<DDD0); //sets bit 0 to output
	DDRD &= ~(0<<DDD5); //sets bit 5 to input


	while(1){

		if (!(PIND & (1<<PIND5))){

			LED_ON;

		}
		else{

			LED_OFF;

		}

		}
	return (0);
}				// should never get here, this is to prevent a compiler warning
