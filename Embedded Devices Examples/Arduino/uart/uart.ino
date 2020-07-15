/*
  Software serial multple serial test
  https://www.arduino.cc/en/tutorial/SoftwareSerialExample

 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.

 The circuit:
 * RX is digital pin 2 (connect to TX of other device)
 * TX is digital pin 3 (connect to RX of other device)

 Note:
 Not all pins on the Mega and Mega 2560 support change interrupts,
 so only the following can be used for RX:
 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69

 Not all pins on the Leonardo support change interrupts,
 so only the following can be used for RX:
 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).

 created back in the mists of time
 modified 25 May 2012
 by Tom Igoe
 based on Mikal Hart's example

 This example code is in the public domain.

 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for Native USB only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  while (mySerial.available()) mySerial.read();
  mySerial.println("Hello, world");

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() // run over and over
{
  char c = '-';
  if (mySerial.available())  {
    c = mySerial.read();  //gets one byte from serial buffer
    if (c == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("0");
    }
    else if (c == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("1");
    }
    else if (c == '2') {
      Serial.println("2");
    }
    
    else if (c == '3') {
      Serial.println("3");
    }
    
    else if (c == '4') {
      Serial.println("4");
    }
    
    else if (c == '5') {
      Serial.println("5");
    }
    else {
      static int state = LOW;
      digitalWrite(LED_BUILTIN, state);
      state = !state;
      Serial.print("weird (");
      Serial.print( (char) c);
      Serial.println(")");
    }
  }
  else {
    for (int i=0; i<3; i++) {
      digitalWrite(LED_BUILTIN, HIGH);
      delay(100);
      digitalWrite(LED_BUILTIN, LOW);
      delay(100);
    }
    Serial.println("unavailable");
  }
  mySerial.write(c);
  delay(1000);
}
