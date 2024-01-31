//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to read key pressed on keyboard and display the data on serial monitor

void setup() 
{
  Serial.begin(9600);
}
 
void loop() 
{
  if (Serial.available() > 0) 
  {
    int data = Serial.read();
        
    switch (data)
  {          
           //Implements number 0-2
           case 48:
           {
            Serial.println("The number pressed is 0");
            break ;
           }
           case 49:
           {
            Serial.println("The number pressed is 1");
            break ;
           }
           case 50:
           {
            Serial.println("The number pressed is 2");
            break ;
           }

         //Implements alphabets a to c
           case 97:
           {
            Serial.println("The alphabet pressed is a");
            break ;
           }
           case 98:
           {
            Serial.println("The alphabet pressed is b");
            break ;
           }
           case 99:
           {
            Serial.println("The alphabet pressed is c");
            break ;
           }

           //Implements alphabets A to C
           case 65:
           {
            Serial.println("The alphabet pressed is A");
            break ;
           }
           case 66:
           {
            Serial.println("The alphabet pressed is B");
            break ;
           }
           case 67:
           {
            Serial.println("The alphabet pressed is C");
            break ;
           }
           
    }
    
   }
}
  
