//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to display data on 16 x 2 LCD.


#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.print("Welcome to"); 
  lcd.setCursor(0, 1);
  lcd.print("JCER"); 
  delay(10000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Voltage : 20 V"); 
  lcd.setCursor(0, 1);
  lcd.print("Current : 2 A"); 
}

void loop() 
{
  
}
