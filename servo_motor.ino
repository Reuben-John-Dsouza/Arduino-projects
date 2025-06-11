#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);  // Signal pin connected to D9
}

void loop() {
  myServo.write(0);    // Move to 0 degrees
  delay(1000);
  myServo.write(90);   // Move to 90 degrees
  delay(1000);
  myServo.write(180);  // Move to 180 degrees
  delay(1000);
}