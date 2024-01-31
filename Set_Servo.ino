//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to set initial position for servo 

#include <Servo.h>

int pos1 =0;
Servo servo1;

void setup() 
{
 servo1.attach(9);
}

void loop() 
{
  for (pos1 = 60; pos1 < 150; pos1++)
  {
    servo1.write(pos1);
    delay(50);
  }

  for (pos1 = 150; pos1 >60;  pos1--)
  {
    servo1.write(pos1);
    delay(50);
  } 
}
