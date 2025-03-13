#include <Arduino.h>

int RED = D0;
int YELLOW = D2;
int GREEN = D3;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop() {
  digitalWrite(RED, HIGH);
  delay(1000); 
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1000); 
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
  delay(1000); 
  digitalWrite(GREEN, LOW);
}

