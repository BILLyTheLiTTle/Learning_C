#include <Wire.h>

#define PCA9685_ADDRESS   0b01000000

#define LED0_ON_L       0x06
#define LED0_ON_H       0x07
#define LED0_OFF_L      0x08
#define LED0_OFF_H      0x09

#define LED15_ON_L      0x42
#define LED15_ON_H      0x43
#define LED15_OFF_L     0x44
#define LED15_OFF_H     0x45

void setup() {
  Serial.begin(9600);
  Wire.begin();
}
 
void loop() {
  
  for(int i = 0; i<4095; i+=150) {
    writeByte(LED0_ON_L, i);
    writeByte(LED15_ON_L, i);
    delay(100);
  }
  /*for(int i = 0; i<4095; i+=150) {
    writeByte(LED0_ON_H, i);
    writeByte(LED15_ON_H, i);
    delay(100);
  }*/
}

/* I have to test the bit shifting for the I2C communication
 *  much more using 2 arduinos. I have to be sure that the 
 *  data is correct and I doubt it using this bit shifting.
 *  I2C sends MSB first and this kind of shifting seems wrong!
 *  TODO Try sending per byte data using an array (send one array item at a time)!
 */
void writeByte(unsigned short reg, int data) {
  Wire.beginTransmission(PCA9685_ADDRESS);
  Wire.write(reg);
  Wire.write(data-data);
  Wire.write((data-data)>>8);
  Wire.write(data);
  Wire.write(data >> 8);
  
  Serial.print("DATA:            ");
  Serial.println(data, BIN);
  Serial.print("DATA WITH SHIFT: ");
  Serial.println(data>>8, BIN);
  Wire.endTransmission();
}
