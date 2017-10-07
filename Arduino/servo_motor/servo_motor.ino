// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3;
int pin = 4;
char data = 0;  
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   pinMode(pin, INPUT);
   Serial.begin(9600);
   pinMode(13, OUTPUT);
}
void loop(){ 
   digitalWrite(pin, HIGH);
   if (digitalRead(servoPin) == HIGH)
    {
      Servo1.write(90);
    }
    else if(digitalRead(servoPin) == LOW){
      Servo1.write(-90);
    }
    if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == '1')              // Checks whether value of data is equal to 1
         digitalWrite(13, HIGH);   //If value is 1 then LED turns ON
      else if(data == '0')         //  Checks whether value of data is equal to 0
         digitalWrite(13, LOW);    //If value is 0 then LED turns OFF
   }
}
