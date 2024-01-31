//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to eliminate noise when pushbutton is pressed : Debouncing 

const int buttonPin = 2;    
const int ledPin = 13;      

int ledState = LOW;         
int buttonState;             
int lastButtonState = LOW;   

unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;    

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, ledState);//digitalWrite(13,LOW)
  Serial.begin(9600);
}

void loop() 
{
  int reading = digitalRead(buttonPin);//1
  Serial.println(reading);//1

  if (reading != lastButtonState) 
  {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) 
  {
      if (reading != buttonState) 
      {
       buttonState = reading;
            if (buttonState == LOW) 
            {
              ledState = !ledState;
              Serial.println("The button was pressed");
            }
       }
   }

   digitalWrite(ledPin, ledState);
   lastButtonState = reading;
}
