#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void){

    DDRA = 0x00; DDRC = 0xFF;
    PORTA = 0xFF; PORTC = 0x00;

    unsigned char LightSensor = 0;
    unsigned char GarageDoor = 0;
    unsigned char CarNum = 0;

    unsigned char Carsensor0 = 0;
    unsigned char Carsensor1 = 0;
    unsigned char Carsensor2 = 0;
    unsigned char Carsensor3 = 0;
    unsigned char IfFull = 0;
    while(1){

        CarSensor0 = PINA & 0x1;
        CarSensor1 = (PINA >> 1) & 0x1;
        CarSensor2 = (PINA >> 2) & 0x1;
        CarSensor3 = (PINA >> 3) & 0x1;
        
        CarNum = Carsensor0 + Carsensor1 + Carsensor2 + Carsensor3;
        IfFull = (CarNum == 4);
        IfFull = (IfFull << 7) & 0x80;

        PORTC = 4 - CarNum + IfFull;

    }

    return 1;


}