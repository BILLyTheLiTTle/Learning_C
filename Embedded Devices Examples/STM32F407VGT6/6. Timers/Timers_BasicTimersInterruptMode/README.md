### Description
In this application the target is to:
- Create Base Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency

The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!