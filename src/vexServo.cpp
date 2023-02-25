#include "vexServo.h"
#include <Arduino.h>

vexServo::vexServo(int pin)
{
    myServo.attach(pin);
    timePrev = millis();
}

void vexServo::run()
{   
    if(millis() - timePrev >= 10) 
    {
        timePrev = millis();
        myServo.write(1000 + i%1000);
        i++;
    }
}

