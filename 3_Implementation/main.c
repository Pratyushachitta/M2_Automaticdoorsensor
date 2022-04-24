/*
 * Automatic_DoorSensor.c

#include "DoorSensor.h"


 int main(void)
{
  DDRB=DDRB&0b11111101;      // we have connect the switch on the port B
  DDRD=DDRD|0b01000000;     // we have connect the Voltmeter and Led  on the port D
  while(1)
  {
if(PINB & 0b00000010)        // toggle pin 1 of B using PINB "input write tricks
  PORTD=PORTD|0b01000000;    // Used to configure the respective PORT d as output/input
    else
    PORTD=PORTD&0b10111111;  // when door closed the led turns off and the buzzer gets ON
  }
  return 0;
  }
