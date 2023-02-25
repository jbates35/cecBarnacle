/*
Controller header file for bluetooth capabilities 
NOTE: This is for connecting to a bluetooth connection utilizing a transceiver
4 pins : VCC, GND, TX, RX
CONNECT TO: APP
*/

// Libraries
#include <SoftwareSerial.h>
#include <Arduino.h>

// Serial Connection
SoftwareSerial bluetoothSerial(8, 9); // 8 = TX, 9 = RX

// Globals
int state;
String incoming_data;
#define baud_rate 9600

// Function Prototypes
void Bluetooth_Setup();
void Bluetooth_Loop();

// Function to setup
void Bluetooth_Setup() {
    // Initialize serial
    bluetoothSerial.begin(baud_rate);
}

// Loop
void Bluetooth_Loop() {
    if (bluetoothSerial.available())
    {
        incoming_data = bluetoothSerial.readStringUntil('\n');
        switch (state)
        {
            case 0:
                //do sumfin
            break;
            case 1:
                // do sumfin
            break;
        }
    }
}