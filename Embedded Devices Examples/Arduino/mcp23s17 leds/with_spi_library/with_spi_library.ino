#include <SPI.h>

/* a collection of Arduino and general electronics projects (https://github.com/tardate/LittleArduinoProjects/blob/master/Electronics101/MCP23S17/MCP23S17.ino) */

#define IODIRA 0x00
#define IODIRB 0x01
#define GPIOA 0x12
#define GPIOB 0x13
#define GPPUB 0x16
#define IOCON0A 0x0A
#define IOCON05 0x05
#define IOCON0B 0x0B
#define IOCON15 0x15

SPISettings expanderSettings(16000000, MSBFIRST, SPI_MODE0);

const byte expander_address = 0;
const byte opcode = 0b01000000;

byte led1 = 3; // GPA3
byte led2 = 2; // GPA2
byte led3 = 2; // GPB2
byte led4 = 5; // GPB5
byte input = 3; // GPB3

int flag = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(SS, OUTPUT);
  digitalWrite(SS, HIGH);
  SPI.begin();
  SPI.beginTransaction(expanderSettings);

  //writeByte(IOCON0A, 0b00001000);
  writeByte(IOCON05, 0b10001000);
  //writeByte(IOCON0B, 0b00001000);
  //writeByte(IOCON15, 0b00001000);
  writeByte(IODIRA, 0b00000000);
  writeByte(IODIRB, 0b00010000);
  //writeByte(GPPUB, 0b00010000);
  writeByte(GPIOA, 0b00000000);
  writeByte(GPIOB, 0b00000000);
}

void loop() {
  // put your main code here, to run repeatedly:
  byte data = readByte(GPIOB);
  if(flag == 0) {
    if (isTrue(data, input)) {
      writeByte(GPIOA, 0b00000000);
      writeByte(GPIOB, 0b00000000);
    }
    else {
      writeByte(GPIOA, 0b00001000);
      writeByte(GPIOB, 0b00100000);
    }    
    flag++;
  }
  else if (flag == 1) {
    if (isTrue(data, input)) {
      writeByte(GPIOA, 0b00000100);
      writeByte(GPIOB, 0b00000000);
    }
    else {
      writeByte(GPIOA, 0b00000100);
      writeByte(GPIOB, 0b00100000);
    }    
    flag++;
  }
  else if (flag == 2) {
    if (isTrue(data, input)) {
      writeByte(GPIOA, 0b00001100);
      writeByte(GPIOB, 0b00000000);
    }
    else {
      writeByte(GPIOA, 0b00001000);
      writeByte(GPIOB, 0b00000100);
    }
    flag++;
  }
  else if (flag == 3) {
    if (isTrue(data, input)) {
      writeByte(GPIOA, 0b00001100);
      writeByte(GPIOB, 0b00000100);
    }
    else {
      writeByte(GPIOA, 0b00001000);
      writeByte(GPIOB, 0b00100000);
    }
    flag++;
  }
  else {
    if (isTrue(data, input)) {
      writeByte(GPIOA, 0b00001100);
      writeByte(GPIOB, 0b00100100);
    }
    else {
      writeByte(GPIOA, 0b00001000);
      writeByte(GPIOB, 0b00000000);
    }
    flag = 0;
  }
  delay(1000);
}

void writeByte(byte reg, byte data) {
  digitalWrite(SS, LOW);

  SPI.transfer(opcode);
  SPI.transfer(reg);
  SPI.transfer(data);

  digitalWrite(SS, HIGH);
}

byte readByte(byte reg) {
  digitalWrite(SS, LOW);

  SPI.transfer(opcode | 1);
  SPI.transfer(reg);
  byte data = SPI.transfer(8);
  
  digitalWrite(SS, HIGH);

  return data;
}

bool isTrue(byte data, byte pin) {
  byte value = data << (pin+1);
  value = value >> 7;
  Serial.println(value, BIN);
  return value == 0 ? false : true;
}
