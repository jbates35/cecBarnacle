#pragma once

#include <Servo.h>

class vexServo
{
public:
    vexServo(int pin);
    void run();

private:
    Servo myServo;
    int servoVal;
    int time, timePrev;
    int i;
};