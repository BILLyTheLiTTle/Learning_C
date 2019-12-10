#include <SPI.h>

// MOSI - 11 - blue
// MISO - 12 - white
// SCK - 13 - yellow
// CS - 10 - Orange

#define MSG_LENGTH 11 + 1
char *actual_data = "hello world"; // size = array length + terminate character (\0)
char sample_data[MSG_LENGTH];

const int cs = 10;

char wren = 0b00000110;
char write_0 = 0b00000010;
char read_0 = 0b00000011 ;
char address = 0b00000000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SPI.begin();

  pinMode(cs, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  // reset CS pin
  digitalWrite(cs, HIGH);
  
  Serial.print("Writing \"");
  write(actual_data);
  Serial.println("\" to memory");

  delay(1000);
  Serial.print("Reading \"");
  Serial.print(read());
  Serial.println("\" from memory");
  delay(1000);
}

void write(char *data) {
  digitalWrite(cs, LOW);
  SPI.transfer(wren);
  digitalWrite(cs, HIGH);
  delay(10);
  digitalWrite(cs, LOW);
  SPI.transfer(write_0);
  SPI.transfer((char)(address>>8));   //send MSByte address first
  SPI.transfer((char)(address));
  for (int i=0; i<MSG_LENGTH; i++) {
    Serial.print(data[i]);
    SPI.transfer(data[i]);
  }
  digitalWrite(cs, HIGH);
}

char* read() {
  digitalWrite(cs, LOW);
  SPI.transfer(read_0);
  SPI.transfer((char)(address>>8));   //send MSByte address first
  SPI.transfer((char)(address));
  for (int i=0; i<MSG_LENGTH; i++) {
    sample_data[i] = SPI.transfer(0x00);
  }
  digitalWrite(cs, HIGH);
  return sample_data;
}
