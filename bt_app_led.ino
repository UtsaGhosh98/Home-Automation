#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); 


void setup() 
{
  pinMode(9, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
  digitalWrite(9, HIGH); 
  Serial.begin(9600);
  
  
  BTSerial.begin(38400);  // HC-05 default speed in AT command more
pinMode(13,OUTPUT);
//pinMode(9,OUTPUT);
digitalWrite(13,HIGH);

}

void loop(){
   if (BTSerial.available())
    
   {   
    char data = BTSerial.read();
   Serial.println(data);

    if(data == 128){
      digitalWrite(13,HIGH);
        Serial.println("open");
    }
    if(data == 120){
      digitalWrite(13,LOW);
      Serial.println("close");
    }

   
      
  

     
   }
}

