#include <Servo.h>

const int trigPin  = 8;
const int echoPin  = 10;
const int servoPin = 6;

const int triggerDistance = 20;
const int openAngle       = 90;
const int closedAngle     = 0;
const int holdTime        = 3000;

Servo lidServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lidServo.attach(servoPin);
  lidServo.write(closedAngle);
  Serial.begin(9600);
}

void loop() {
  int distance = getDistance();
  Serial.print("Distance: "); Serial.print(distance); Serial.println(" cm");

  if (distance < triggerDistance) {
    openLid();
  }
  delay(100);
}

void openLid() {
  lidServo.write(openAngle);
  delay(holdTime);
  lidServo.write(closedAngle);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}
