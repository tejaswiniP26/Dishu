//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to measure the distance of obstacle using ultrasonic sensor and 
//alert with the alarm if distance is too close
 
const int buzPin = 8;
const int trigPin = 9; 
const int echoPin = 10;

long duration;
int distanceCm;

void setup() 
{
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(buzPin, OUTPUT);
 Serial.begin(9600);
}

void loop() 
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH);
 distanceCm= duration*0.034/2;
 Serial.print("Distance in Cm ");
 Serial.println(distanceCm);
 //delay(100);

 if (distanceCm <= 20)
 {
  digitalWrite(buzPin, HIGH);
 }
 else
 {
  digitalWrite(buzPin, LOW);
 }
}
