#include <avr/io.h>
#define F_CPU 16000000UL // Sets the clock to 16Mhz
#include <util/delay.h>

int main(){

	DDRD = 0XFF; // Sets the Register DDRD to high

	unsigned char numbers [] = {0x0C, 0xB3, 0X9D, 0XEA, 0xDA, 0xFA, 0x0E, 0xFE, 0xCD, 0x7E, 0x01};

	unsigned int i;	

	while(1){

		for(i = 0; 1 < 10; i++){

			PORTD = numbers[i];
			_delay_ms(1000);

		} 

	}

	return 0;
}
