### Description
In this application the target is to:
- Create General Purpose Timer with 4 channels in Output Compare Mode
- Change the CCR, ARR values
- Check the output with a logic analyzer

The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!