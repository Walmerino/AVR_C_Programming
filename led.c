#include <avr/io.h>
#include <util/delay.h>
 
#define BLINK_DELAY_MS 10000
 
int main (void){

 /* set pin 5 of PORTB for output*/
 DDRB |= _BV(DDB5);
 DDRB |= _BV(DDB4);

 while(1) {

/*turns on and off pin 5*/
 
  PORTB |= _BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB5);
  _delay_ms(BLINK_DELAY_MS);
 
/*turns on and off pin 4*/
  PORTB |= _BV(PORTB4);
  _delay_ms(BLINK_DELAY_MS);

  PORTB &= ~_BV(PORTB4);
  _delay_ms(BLINK_DELAY_MS);

 }
}
