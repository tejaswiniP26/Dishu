//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to interface 4 x 4 keypad with Arduino and display key pressed on serial monitor.

#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char keys[ROWS][COLS] = {

{'1','2','3','A'},

{'4','5','6','B'},

{'7','8','9','C'},

{'*','0','#','D'}

};


byte rowPins[ROWS] = {1,2,3,4}; 

byte colPins[COLS] = {5,6,7,8}; 

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


void setup()
{
 Serial.begin(9600);
}

void loop()
{
 char key = keypad.getKey();  
 if (key!= NO_KEY)
 {
  Serial.println(key); 
 }
}
