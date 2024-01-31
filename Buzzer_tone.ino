//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to alarm different conditions with same buzzer using tone () & noTone()

void setup() 
{
 pinMode(6, OUTPUT);
}

void loop() 
{
  
  tone(6, 5000, 500);
  delay(2000);
  noTone(6);

}
