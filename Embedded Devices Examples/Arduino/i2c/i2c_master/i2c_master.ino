// Wire Master Reader
// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Reads data from an I2C/TWI slave device
// Writes data to an I2C/TWI slave device

// Refer to the "Wire Slave Sender" example for use with this (https://www.arduino.cc/en/Tutorial/LibraryExamples/MasterReader)
// Refer to the "Wire Slave Receiver" example for use with this (https://www.arduino.cc/en/Tutorial/LibraryExamples/MasterWriter)

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

int counter = 0;
int amount_of_bytes = 13;
String data_to_send = "Hello ST";

void loop() {
    Wire.requestFrom(8, amount_of_bytes);    // request X bytes from slave device #8

    while (Wire.available()) { // slave may send less than requested
      char c = Wire.read(); // receive a byte as character
      Serial.print(c);         // print the character
    }
    //delay(100);
    Wire.beginTransmission(8); // transmit to device #8
    Wire.write(data_to_send.c_str()); // sends data
    Wire.endTransmission();
  //delay(500);
}
