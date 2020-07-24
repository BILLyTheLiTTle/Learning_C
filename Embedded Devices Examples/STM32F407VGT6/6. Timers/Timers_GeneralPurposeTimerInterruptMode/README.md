### Description
In this application the target is to:
- Create General Purpose Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency

The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!

After some MCO2 frequency value (around 24MHz) the `HAL_TIM_PeriodElapsedCallback` and `TIM1_UP_TIM10_IRQHandler` functions were executed only once!