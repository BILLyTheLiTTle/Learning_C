uint8_t interruptPin = 2; 
volatile long pulse;

long startTime = 0;

long startPulse = 0;
long puls = 0;
long endPulse = 0;
 
void setup() 
{ 
  pulse=0; 
  
  Serial.begin(9600); 
 
 pinMode(interruptPin, INPUT_PULLUP); 
 attachInterrupt(digitalPinToInterrupt(interruptPin), count_pulse, CHANGE);  //digitalPinToInterrupt(interruptPin) or 0
} 
 
void loop() 
{
  pulse=0; 
  interrupts(); 
  delay(1000); 
  noInterrupts(); 
  
  Serial.print("Pulses per second: "); 
  Serial.println(pulse);

  /*if (millis() - startTime >= 1000) {
    startTime = millis();
    Serial.print("Pulses per second: "); 
    Serial.println(pulse);
    pulse = 0;
  }
  else {
    //Serial.println(millis());
  }*/

  /*interrupts();
  pulse = 0;
  startPulse = micros();
  puls = pulse;
  endPulse = micros();
  noInterrupts();
  Serial.print(puls);
  Serial.print(" per ");
  Serial.println(endPulse - startPulse);
  
  //So, in one second, you’ll get 1,000 values with millis(), and you’ll get 250,000 values with micros(), which corresponds to 1,000,000/4.
  // Found here: https://roboticsbackend.com/arduino-millis-vs-micros/
  long result = (puls * 250000L) / (endPulse - startPulse);
  Serial.println(result * 1L);*/
  //delay(1000);
} 
 
void count_pulse() 
{ 
  pulse++; 
} 
