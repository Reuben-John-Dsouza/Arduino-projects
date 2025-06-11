#include <Stepper.h>

const int stepsPerRevolution = 2048;  // For 28BYJ-48

// Initialize the stepper library
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  myStepper.setSpeed(10); // RPM
}

void loop() {
  myStepper.step(stepsPerRevolution);   // 1 full rotation CW
  delay(1000);
  myStepper.step(-stepsPerRevolution);  // 1 full rotation CCW
  delay(1000);
}
