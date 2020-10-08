# Timers_GeneralPurposeTimerOnePulseMode

## Learning Outcomes
In this application the target is to:
- Get triggered by event
- Create 1 pulse after specific delay
- Check the output with a logic analyzer

## Details
The CubeMX HSE clock frequency should stick to 8MHz (cuz the HSE is 8MHz) and if you change it, the timer works unpredictable. You can configure the PLL, though!

## Issues
I could not achieve the One Pulse Mode using Input Capture as the book (Mastering STM32) sais, but I have used `Slave Mode: Trigger Mode` and `Trigger Source: TI1FP1` and it works as I want to.