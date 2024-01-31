//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to Read the state of Pushbutton and display the same on serial monitor 

int pushButton = 2;

void setup() 
{
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

void loop() 
{
  int buttonState = digitalRead(pushButton);
  Serial.println(buttonState);
  delay(1);        
}
