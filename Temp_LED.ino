//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to measure the temperature & humidity of the vicinity and display the same on serial monitor. 
//Turn on LED if the temperature goes high than the threshold.

#include<dht.h>  
#define dht_dpin 12 
int led_pin = 7 ;
dht DHT; 

void setup()
{
 pinMode(7, OUTPUT);
 Serial.begin(9600);
}
 
void loop()
{
  DHT.read11(dht_dpin); 
  int temp=DHT.temperature;
  Serial.print("Temperature in celcius:");
  Serial.println(temp);
  
  int humid=DHT.humidity;
  Serial.print("Humidity in %:");
  Serial.println(humid);
  
  if(temp < 25) 
    { 
      Serial.println("Climate is Cold");
    }
    
  else if(temp > 25 && temp <= 30)
    {
      Serial.println("Climate is Normal");
    }
  else if(temp > 30) 
    {
     Serial.println("Climate is Hot");
     digitalWrite(led_pin, HIGH);
     delay(1000);
     digitalWrite(led_pin, LOW);
    }
  delay(3000);
}
