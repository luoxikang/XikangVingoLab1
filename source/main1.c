#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void){

    DDRA = 0x00; DDRB = 0xFF;
    PORTA = 0xFF; PORTB = 0x00;

    unsigned char LightSensor = 0;
    unsigned char GarageDoor = 0;
    while(1){

        LightSensor = PINA & 0x2;
        LightSensor = LightSensor >> 1;

        GarageDoor = PINA & 0x1;
        
        PORTB = GarageDoor & ~LightSensor;

    }

    return 1;


}