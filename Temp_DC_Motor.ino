 //Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to read the value of the temperature using temperature sensor & control speed of a DC motor.  

#include<dht.h>  
#define dht_dpin 12 
#define pwm 9 

dht DHT; 


void setup()
{
 analogWrite(pwm, 255);
 Serial.begin(9600);
}
 
void loop()
{
  DHT.read11(dht_dpin); 
  int temp=DHT.temperature; 
  Serial.print("Temperature:");
  Serial.print(temp);
    
  if(temp <25) 
    { 
      analogWrite(9,0);
      Serial.println("FAN IS OFF");
      delay(100);
    }
    
    else if(temp==25)
    {
      analogWrite(pwm, 51);
      Serial.println("FAN IS ON AND FAN SPEED IS 20%");
      delay(100);
    }
    
     else if(temp==26) 
    {
      analogWrite(pwm, 102);
      Serial.println("FAN IS ON AND FAN SPEED IS 40%");
      delay(100);
    }
    
     else if(temp==27)
    {
      analogWrite(pwm, 153);
      Serial.println("FAN IS ON AND FAN SPEED IS 60%");
      delay(100);
    }
    
    else if(temp==28)
    {
      analogWrite(pwm, 204);
      Serial.println("FAN IS ON AND FAN SPEED IS 80%");
      delay(100);
    }
     else if(temp>29)
    {
      analogWrite(pwm, 255);
      Serial.println("FAN IS ON AND FAN SPEED IS 100%");
      delay(100);
    } 
  delay(3000);
}
