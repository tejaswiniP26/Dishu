//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to detect motion using PIR sensor and turn On LED once motion is detected. 

int sensor = 7; 
int led = 8;
int sensor_value; 

void setup()
{
 pinMode(sensor,INPUT); 
 pinMode(led,OUTPUT);
 Serial.begin(9600); 
}

void loop()
{
 sensor_value=digitalRead(sensor); 
 Serial.println(sensor_value); 
 
 if (sensor_value == 1)
 {
  digitalWrite(led, HIGH);
 }
 else 
 {
  digitalWrite(led, LOW);
 }
}
