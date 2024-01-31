//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to blink an LED 

void setup() 
{
  pinMode(10,OUTPUT);
}

void loop() 
{
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
}
