//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to read data from potentiometer and change the angle of servo in accordance with Potentiometer 

#include <Servo.h>  
 
int potpin = A0;  
int val;  
Servo myservo;  
 
void setup() 
{
 myservo.attach(9);  
}
 
void loop() 
{
  val = analogRead(potpin);            
  val = map(val, 0, 1023, 0, 180);     
  myservo.write(val);                  
  delay(15);                           
}
