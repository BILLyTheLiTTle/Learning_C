### Description
In this application the target is to:
- Create General Purpose Timer
- In interrupt mode
- In DMA mode
- Toggle all on-board LEDs

The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!