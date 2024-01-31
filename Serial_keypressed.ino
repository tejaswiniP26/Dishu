//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to display ASCII value on serial monitor of the key pressed on the keyboard 

void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
  if (Serial.available() > 0) 
  {
    int data = Serial.read();
    Serial.println(data);
  }
}
  
