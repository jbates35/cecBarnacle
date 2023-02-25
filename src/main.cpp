#include <Arduino.h>
#define penis5 4

int testSignal;

void setup() {
  // put your setup code here, to run once:
  int x = 4;

  testSignal = 4;

  pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  testSignal = analogRead(A4);
  digitalWrite(5, testSignal);

}