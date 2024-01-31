//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to read the data from IR sensor and turn ON LED for 1 second.

void setup() 
{ 
 Serial.begin(9600); 
 pinMode(A0,INPUT); 
 pinMode(9,OUTPUT);
}

 void loop() 
{ 
 int sensorvalue = analogRead(A0);
 Serial.println(sensorvalue); 

 if(sensorvalue < 210) 
 {
  digitalWrite(9,HIGH); 
  delay(1000);
  Serial.println("Object detected"); 
 }
 else 
 {
 digitalWrite(9,LOW); 
 }
 delay(100); 
}
