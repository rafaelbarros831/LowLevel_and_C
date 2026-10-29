#include<avr/io.h>
#include<util/delay.h>

#define EXE 1

void LigaLEDL(void){

PORTB = 0b00100000;

}

void DesligaLEDL(void){

PORTB &= 0b00000000;
    
}

int main(void){

    DDRB = 0b00000001;

    DDRB |= (1 << PORT5);

while (EXE){

    LigaLEDL();
    _delay_ms(100);

    DesligaLEDL();
    _delay_ms(100);
}


return 0;
}