### Description
In this application the target is to:
- Communicate STM32 MCU (*master*) with Arduino (*slave*)
- Software pin is used as CS

This example has some problems with the communication with Arduino but the devices seems to exchange a kind of information, which is close to what I expect to! 
Also, make sure you connect MOSI --> MOSI, MISO --> MISO, CS --> CS, CLK --> CLK.