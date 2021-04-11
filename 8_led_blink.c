#include <avr/io.h>
#include <util/delay.h>

 

int main(void)
{

	DDRD = 0xFF;
	unsigned int A = 0b00000001;
	unsigned int B = 0b00000011;
	unsigned int C = 0b00000111;
	unsigned int D = 0b00001111;
	unsigned int E = 0b00011111;
	unsigned int F = 0b00111111;
	unsigned int G = 0b01111111;
	unsigned int DP =0b11111111;
	unsigned int H = 0b11111111;
	unsigned int I = 0b11111111;
	unsigned int J = 0b10000000;
	unsigned int K = 0b11000000;
	unsigned int L = 0b11100000;
	unsigned int M = 0b11110000;
	unsigned int N = 0b11111000;
	unsigned int O = 0b11111100;
	unsigned int P = 0b11111110;
	unsigned int leds [] = {A, B, C, D, E, F, G, DP, H, I, J, K, L, M, N, O, P};
	int i;

	while (1) {

		for(i=0; i<=17	; i++){

			PORTD |= leds[i];
			_delay_ms(50000);
		}


	}
	return 0;
}
