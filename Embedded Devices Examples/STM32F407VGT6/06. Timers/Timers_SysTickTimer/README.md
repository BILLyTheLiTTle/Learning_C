# Timers_SysTickTimer

## Learning Outcomes
In this application the target is to:
- Toggle a pin every 1ms using SysTick timer
- Check the output and verify this 1ms toggling with a logic analyzer
- Change the SysTick to a different timer (using CubeMX) and run again if you wish

## Details
The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!