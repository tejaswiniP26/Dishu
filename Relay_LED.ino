//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to turn ON LED to demonstrate the controlling action of  relay (Active HIGH, Active LOW)

int relay = 10; 

void setup () 
{ 
  pinMode (relay, OUTPUT);  
} 
  void loop () 
{ 
   digitalWrite(relay, LOW); 
   delay(1000);
   digitalWrite(relay, HIGH); 
   delay(1000);
  
}
