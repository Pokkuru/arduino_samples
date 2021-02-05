#include <Stepper.h>
const float turnSteps = 200;
float rpm = 30;
float Steps = 1; 
 
Stepper myStepper(turnSteps, 8,9,10,11);
 
void setup() {
  myStepper.setSpeed(rpm) ;
}
 
void loop() {
  myStepper.step(3);
  delay(1000);
}
