//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to Blink LED without using delay ()

const int ledPin =  LED_BUILTIN;
int ledState = LOW;             
unsigned long previousMillis = 0;        
const long interval = 1000;           

void setup() 
{
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) 
  {
    previousMillis = currentMillis;
    if (ledState == LOW) 
    {
      ledState = HIGH;
    } 
    else 
    {
      ledState = LOW;
    }
    digitalWrite(ledPin, ledState);
  }
}
