// Wire Slave Sender
// Wire Slave Receiver
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Sends data as an I2C/TWI slave device
// Receives data as an I2C/TWI slave device

// Refer to the "Wire Master Reader" example for use with this (https://www.arduino.cc/en/Tutorial/MasterReader)
// Refer to the "Wire Master Writer" example for use with this (https://www.arduino.cc/en/Tutorial/MasterWriter)

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

uint8_t is_hello = 1;
void setup()
{
  Wire.begin(9);                // join i2c bus with address #9
  //Wire.setClock(100000);
  Wire.onReceive(receiveEvent); // register event
  Wire.onRequest(requestEvent); // register event
  Serial.begin(9600);           // start serial for output
  Serial.println("SETUP OK");
}

void loop()
{
  static int counter = 0;
  delay(100);
  if(counter%100 == 0) {    
    Serial.println("LOOPING...");
  }
  counter++;
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany)
{
  Serial.println("DATA ARRIVED");
  while(Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
  //int x = Wire.read();    // receive byte as an integer
  Serial.println("");         // print the integer
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent() {
  Serial.println("DATA REQUESTED");
  if (is_hello == 1) {
    Wire.write("Hello ST"); // respond with message of 8 bytes as expected by master
    Serial.println("Hello ST");
    is_hello = 0;
  }
  else if (is_hello == 0) {
    Wire.write("Bye ST"); // respond with message of 6 bytes as expected by master
    Serial.println("Bye ST");
    is_hello = 1;
  } 
  
}
