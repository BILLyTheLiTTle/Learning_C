#include <SPI.h>
#include "MCP23S17.h"

/* Arduino library for MCP23S17 IO Expanders (https://github.com/MajenkoLibraries/MCP23S17) */

MCP23S17 expander(&SPI, 10, 0);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  expander.begin();
  
  expander.pinMode(10, OUTPUT);
  expander.pinMode(11, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  expander.digitalWrite(10,expander.digitalRead(11));
}
