### Description
Each one of the folders is a seperate project which could be imported into STM32CubeIDE.
In order to test the UART I have used an Arduino UNO. Source code for Arduino could be found under Arduino directory.

It seems that the arduino loses some data sometimes. Also, even when you terminate the application from the CubeIDE, it seems that the application is still running the procedure is the following:
1. Disconect the STM32 MCU.
2. Re-load the application in Arduino.
3. Connect the STM32 MCU.
