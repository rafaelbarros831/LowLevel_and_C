#include<avr/io.h>
#include<util/delay.h>

int main(){

DDRB = 0b00000010; //IMPORTANTE: O compilador precisa de 0b na frente de qualquer número binário pra entender que o número é um binário, caso contrário ele pensa que é OCTAL.

  while(1){

  PORTB = 0b0000010;
  _delay_ms(500);

  PORTB = 0b00000000;
  _delay_ms(500);

 }

return 0;
}