#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>


int main(){

	DDRD = 0xFF; //sets REGISTER D to OUTPUT

	char led[8] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80}; 
	int i;

	while(1){

		for(i=0;i<=7;i++){

			PORTD = led[i];
			_delay_ms(2000);

		}


	}

	return 0;
}