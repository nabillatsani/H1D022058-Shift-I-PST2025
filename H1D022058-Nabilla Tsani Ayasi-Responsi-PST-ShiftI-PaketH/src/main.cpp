#include <Arduino.h>
#include <Servo.h>

Servo myservo;
long distance;

int triginPin = D1;
int echoPin = D2;
int LEDgreen = D3;
int LEDred = D4;

void setup() {
  pinMode(LEDgreen, OUTPUT);
  pinMode(LEDred, OUTPUT);
  pinMode(triginPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myservo.attach(D5);
}

void loop() {
  digitalWrite(triginPin, LOW);
  delayMicroseconds(5);
  digitalWrite(triginPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triginPin, LOW);

  if (distance <= 150){
    myservo.write(90); //membuka pintu sebesar 90 derajat
    digitalWrite(LEDgreen, HIGH);
  }
  else{
    digitalWrite(LEDgreen, LOW);
    myservo.write(0); //menutup pintu ke posisi awal
    digitalWrite(LEDred, HIGH);
  }
  delay(1000);
}



