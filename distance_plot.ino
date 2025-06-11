#define Trig 9
#define Echo 10
#define LED 13
#define Horn 12
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(Horn, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration;
  float distance_cm;
  // Clear the trigger pin
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  // Send a 10 µs pulse to trigger pin
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  // Read the echo pin (returns duration in microseconds)
  duration=pulseIn(Echo,HIGH);
  // Calculate distance (speed of sound = 34300 cm/s)
  distance_cm = (duration * 0.0343) / 2;
  // Print the distance
  if(distance_cm<15.00){
    digitalWrite(LED, HIGH);
    digitalWrite(Horn, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
    digitalWrite(Horn, LOW);
  }
  Serial.print("Distance: ");
  Serial.print(distance_cm);
  Serial.println(" cm");

  delay(500);
}
