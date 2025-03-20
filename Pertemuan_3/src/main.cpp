#include <Arduino.h>

// put function declarations here:
int triginPin = D0;
int echoPin = D1;
int led = D2;

long duration;
long distance;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(triginPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(triginPin, LOW);
  delayMicroseconds(5);
  digitalWrite(triginPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triginPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = 0.034 * duration / 2;

  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.print(" cm");
  if (distance <= 10){
    digitalWrite(led, HIGH);
  }
  else{
    digitalWrite(led, LOW);
  }
  delay(1000);
}

