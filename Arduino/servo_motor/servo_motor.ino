// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3;
int pin = 4; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   pinMode(pin, INPUT);
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
}
