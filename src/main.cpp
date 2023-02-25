#include <Arduino.h>
#include "vexServo.h"
#include "controller.h"
#include "debounce_pin.h"
#include <PS5BT.h>
#include <usbhub.h>

// Defines
#define ENCODER_A 2
#define ENCODER_B 3
#define MOTOR_CW 9
#define MOTOR_CCW 10
#define MOTOR_PWM 11
#define POT_INPUT A0

// reference this for PS4: https://github.com/felis/USB_Host_Shield_2.0/blob/master/examples/Bluetooth/PS4BT/PS4BT.ino
vexServo thisServo(MOTOR_PWM);
USBHub myUSB;


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