//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to Turn ON LED momentarily when Pushbutton is pressed

const int buttonPin = 2;     
const int ledPin =  13;      

int buttonState = 0;         

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH) 
    {
     digitalWrite(ledPin, HIGH);
    } 
    else 
    {
     digitalWrite(ledPin, LOW);
    }
}
