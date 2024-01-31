//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to Count number of times Pushbutton is pressed, Turn ON LED after every four times button is pressed

const int  buttonPin = 2;    
const int ledPin = 13;       

int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;     

void setup() 
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) 
  {
    if (buttonState == HIGH) 
    {
      buttonPushCounter++;
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } 
    delay(50);
  }
  
  lastButtonState = buttonState;


   if (buttonPushCounter % 4 == 0) 
   {
    digitalWrite(ledPin, HIGH);
   } 
   else 
   {
    digitalWrite(ledPin, LOW);
   }
}
