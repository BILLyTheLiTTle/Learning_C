// More info for the example could be found here (https://circuitdigest.com/microcontroller-projects/arduino-spi-communication-tutorial).

#include<SPI.h>

volatile boolean received;
volatile byte slave_received, slave_send;
char hello[13] = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a'};
char hello_st[8] = {'H', 'e', 'l', 'l', 'o', ' ', 'S', 'T'};
volatile uint8_t counter = 0;

void setup()
{
  Serial.begin(9600);           // start serial for output
  
   pinMode(MISO,OUTPUT);        //Sets MISO as OUTPUT (Have to Send data to Master IN)
   //pinMode(SS, INPUT_PULLUP);
   //pinMode(MOSI, OUTPUT);
   //pinMode(SCK, INPUT);

  SPCR |= _BV(SPE);             //Turn on SPI in Slave Mode
  received = false;

  SPI.attachInterrupt();        //Interrupt ON is set for SPI commnucation
  
  Serial.println("SETUP OK");
}

ISR (SPI_STC_vect)               //Inerrrupt routine function 
{
  char c = SPDR; // read byte from SPI Data Register
  if (counter < sizeof hello) {
    hello [counter++] = c; // save data in the next index in the array buff
 }
 else {
  //if (c == '\r') //check for the end of the word
    received = true;
 }
}

void loop()
{
  if (received) {
    Serial.println (hello);
    
    for(int i=0;i<8 ; i++)
    SPI.transfer(hello_st[i]);

    received = false;
    counter = 0;
  }
  //delay(2000);
}
