/*
 * Automatic_DoorSensor.c
 *  author BALAJI G 
 *  version 0.1
 *  date 2022-04-22
 *
 *
 * copyright Copyright (c) 2022
 */   

#include <avr/io.h>   // This header file includes the appropriate Input/output definitions for the device
#include <stdio.h>    //stdio. h is a header file which has the necessary information to include the input/output related functions in our program.
int main(void)
{
  DDRB=DDRB&0b11111101;      // we have connect the switch on the port B
  DDRD=DDRD|0b01000000;     // we have connect the Voltmeter and Led  on the port D 
  while(1)
  {
if(PINB & 0b00000010)        //toggle pin 1 of B using PINB "input write tricks
  PORTD=PORTD|0b01000000;    // Used to configure the respective PORT d as output/input
    else
    PORTD=PORTD&0b10111111;  // when door closed the led turns off and the buzzer gets ON
  }
  return 0;
  }
