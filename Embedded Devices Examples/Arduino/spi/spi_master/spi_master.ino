// More info for the example could be found here (https://circuitdigest.com/microcontroller-projects/arduino-spi-communication-tutorial).

#include<SPI.h> 

char hello[13] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
char hello_st[8] = {'H', 'e', 'l', 'l', 'o', ' ', 'S', 'T'};

void setup() {
  SPI.begin();                            //Begins the SPI commnuication
  SPI.setClockDivider(SPI_CLOCK_DIV128);    //Sets clock for SPI communication at 128 (16/128=0.125Mhz)
  digitalWrite(SS,HIGH);                  // Setting SlaveSelect as HIGH (So master doesnt connnect with slave)
  
  Serial.begin(9600);  // start serial for output
  Serial.println("SETUP OK!");
}

void loop() {
    digitalWrite(SS, LOW);                  //Starts communication with Slave connected to master
    
    for (int i = 0; i < 8; i++) {
      if (i < 8)
        hello[i] = SPI.transfer(hello_st[i]);
      else //if (i < 13)
        hello[i] = SPI.transfer(0);
    }

    digitalWrite(SS,HIGH);                  // Setting SlaveSelect as HIGH (So master doesnt connnect with slave)
    
    Serial.println(hello);

    delay(1000);
}
