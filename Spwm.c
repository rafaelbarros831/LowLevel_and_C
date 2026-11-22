#include <avr/io.h>
#include <util/delay.h>

int main(void){

DDRB = (1 << 1); // 0b00000010

TCCR1A = (1 << 7) | (1 << 1); //10000010
TCCR1B = (1 << 1) | (1 << 3) | (1 << 4) | (~0b11100101); //00011010

ICR1 = 40000;

while(1){
  OCR1A = 2000; // 0 graus
  _delay_ms(2000);
  OCR1A = 3000; // 90 graus
  _delay_ms(2000);

}

return 0;
}