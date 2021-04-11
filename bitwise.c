#include <stdio.h>


int main(){

	unsigned int a = 0b00000011;
	unsigned int b = 0b00000111;

	unsigned int c = 0;

	c = a;
	printf("a is %d\n", c);

	c = b;
	printf("b is %d\n", c);

	c = a | b;
	printf("c = a | b is %d\n", c);

	c = a & b;
	printf("c = a & b is %d\n", c);

	c = a ^ b;
	printf("c = a ^ b is %d\n", c);

	c = ~a;
	printf("c = ~a is %d\n", c);

	c = ~b;
	printf("c = ~b is %d\n", c);

	c = a >> 1;
	printf("c = a >> 1 is %d\n", c);

	c = b >> 1;
	printf("c = b >> 1 is %d\n", c);

	c = a << 1;
	printf("c = a << 1 is %d\n", c);

	c = b << 1;
	printf("c = b << 1 is %d\n", c);

	return 0;
}