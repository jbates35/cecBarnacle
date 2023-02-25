#include <Arduino.h>
#include "vexServo.h"

#define ENCODER_A 2
#define ENCODER_B 3
#define MOTOR_CW 9
#define MOTOR_CCW 10
#define MOTOR_PWM 11
#define POT_INPUT A0

vexServo thisServo(MOTOR_PWM);

void setup() {
  // put your setup code here, to run once:

  pinMode(ENCODER_A, INPUT); // ENCODER_A as Input
  pinMode(ENCODER_B, INPUT); // ENCODER_B as Input

  pinMode(MOTOR_CW, OUTPUT); // MOTOR_CW as Output
  pinMode(MOTOR_CCW, OUTPUT); // MOTOR_CW as Output

}

void loop() {

  thisServo.run();
    // put your main code here, to run repeatedly:

}