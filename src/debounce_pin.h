/*
Debouncing a pin
*/

// Declarations
#include <SoftwareSerial.h>
#include <Arduino.h>

// Variables
int button_state = 0;
unsigned long last_debounce_time = 0;
unsigned long debounce_delay = 50;
int pin_to_read = 13;

// Debouncing Function
bool check_button_press() {
    int reading = digitalRead(pin_to_read);
        if (reading != button_state)
        {
            last_debounce_time = millis();
        }
        if ((millis() - last_debounce_time) > debounce_delay)
        {
            button_state = reading;
            if (button_state == HIGH)
            {
                return true;
            }
        }
        return false;
}