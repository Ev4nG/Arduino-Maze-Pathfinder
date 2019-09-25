#include <Servo.h>

Servo servoLeft;
Servo servoRight;



void setup()
{
  tone(4, 2000, 1000);
  delay(1000);
  
  pinMode(7, INPUT);
  pinMode(5, INPUT);
    Serial.begin(9600);
  
   servoLeft.attach(13);
   servoRight.attach(12);
  
  turnLeft =  servoLeft.writeMicroseconds(1300);
               servoRight.writeMicroseconds(1300);
               delay(600);


  
  servoLeft.detach();
  servoRight.detach();
  
}


void loop() 
{
  byte wLeft = digitalRead(5);
  byte wRight = digitalRead(7);
  
   if((wLeft == 0) && (wRight == 0))
  {
    backward(1000);
    turnLeft(400);
    
  }
  
  Serial.print(wLeft);
  Serial.println(wRight);
  
 
  
  delay(50);
}
