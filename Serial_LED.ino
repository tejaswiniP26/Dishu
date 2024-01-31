//Jain College of Engineering & Research, Udyambag, Belagavi-590008 
//Department of Electronics & Communication Engineering 
//Program to read data from serial port and turn ON LED if data is 'O' & turn OFF LED if data is 'F'

char data = 0;
       
void setup()
{
 Serial.begin(9600);                                  
 pinMode(3, OUTPUT);  
}

void loop()
{
   if(Serial.available()>0 )      
   {
    data = Serial.read();        
    Serial.print(data);          
    Serial.print("\n");       
     
    if(data == '0')          
    {
     digitalWrite(3, LOW);   
    }

    if(data == '1')    
    {     
     digitalWrite(3, HIGH);    
    }
 }
}
