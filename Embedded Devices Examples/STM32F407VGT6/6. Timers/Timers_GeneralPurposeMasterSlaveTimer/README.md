### Description
In this application the target is to:
- Create General Purpose Master Timer (TIM1)
- Create General Purpose Slave Timer (TIM2)
- Generate Event from the TIM1 using `HAL_TIM_GenerateEvent` function
- Count the frequency

The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!

When the application is running, open the `SFRs` tab (is next to the `Live Expressions` tab) and find the timers (`TIM1`, `TIM2`). Play at the `.ioc` file with **`Slave Mode:`**` `*`Reset Mode / Trigger Mode`* and see at the `SFRs` tab how the `TIM2->CNT` is resetted or changes respectively.
