#include "Servo.h"
Servo myservo;

void setup(){
  myservo.attach(5, 500, 2400);  
}

void loop(){
  myservo.write(0);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(160);
  delay(500);
  myservo.write(0);
  delay(5000);
}
