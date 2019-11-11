#include <Wire.h>
#include "Adafruit_PWMServoDriver.h"

/* Arduino library for PCA9685 (https://github.com/adafruit/Adafruit-PWM-Servo-Driver-Library/archive/master.zip) */

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(); //0x40

void setup() {
  Serial.begin(9600);
  Serial.println("16 channel PWM test!");
  pwm.begin();
  pwm.setPWMFreq(1600);  // This is the maximum PWM frequency
 
  // save I2C bitrate
  uint8_t twbrbackup = TWBR;
  // must be changed after calling Wire.begin() (inside pwm.begin())
  TWBR = 12; // upgrade to 400KHz!
 
}
 
void loop() {
  // Drive each PWM in a 'wave'
  for (uint16_t i=0; i<4096; i += 8)
  {
    pwm.setPWM(0, 0, (i + (4096/16)*0) % 4096 );
    pwm.setPWM(15, 0, (i + (4096/16)*0) % 4096 );
    delay(10);
  }
}
