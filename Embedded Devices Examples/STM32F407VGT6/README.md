# Table of Contents

## 1. Quick Test
### OnBoardLEDsAndButtons
- On Board LEDs
- On Board Button
- Interrupts
### OnBoardLEDsBitBanding
- On Board LEDs with bit-banding

## 2. Interrupts Management
### Interrupts_PrioritiesSubpriorities
- Handle 3 different external LEDs and variables using 3 different interrupts
- Mix priorities and subpriorities

## 3. UART/USART Communication
### UART_PollingMode
- Polling UART
- UART Errors (Failed)
### UART_InterruptMode
- UART in interrupt mode
- Transmit/Receive Callback Functions
- UART Errors
### UART_DMAInterruptMode
- UART in interrupt mode with DMA
- Transmit/Receive Callback Functions
- UART Errors

## 4. DMA
### DMA_MemoryToMemory
- Read from Flash and write to SRAM
- Using DMA
- Understand the source/destination increment

## 5. Clock Tree
### ClockExperiments
- Change Clock settings
- Export the clock to MCO
- Count the clock pulses

## 6. Timers
### Timers_BasicTimerInterruptMode
- Create Basic Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency
### Timers_GeneralPurposeTimerInterruptMode
- Create General Purpose Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency
### Timers_GeneralPurposeTimerInterruptDMAMode
- Create General Purpose Timer
- In interrupt mode
- In DMA mode
- Toggle all on-board LEDs
### Timers_GeneralPurposeMasterSlaveTimer
- Create General Purpose Master Timer (TIM1)
- Create General Purpose Slave Timer (TIM2)
- Generate Event from the TIM1 using `HAL_TIM_GenerateEvent` function
- Count the frequency
### Timers_GeneralPurposeTimerCaptureMode
- Create General Purpose Timer in Capture Mode
- Measure the frequency
### Timers_GeneralPurposeTimerOutputCompareMode
- Create General Purpose Timer with 4 channels in Output Compare Mode
- Change the CCR, ARR values
- Check the output with a logic analyzer
### Timers_GeneralPurposeTimerPwmMode
- Create 4 different PWM pulses from the same timer
- Check the output with a logic analyzer
### Timers_GeneralPurposeTimerOnePulseMode
- Get triggered by event
- Create 1 pulse after specific delay
- Check the output with a logic analyzer
### Timers_SysTickTimer
- Toggle a pin every 1ms using SysTick timer
- Check the output and verify this 1ms toggling with a logic analyzer
- Change the SysTick to a different timer (using CubeMX) and run again if you wish

## 7. ADC
### ADC_InterruptMode
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In interrupt mode
### ADC_DMAMode
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In DMA mode
### ADC_TimerTriggerDMADiscontinuousMode
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- Use a timer as a trigger every 5 seconds
- In Discontinuous mode (1 channel at a time)
- In DMA mode

## 8. I<sup>2</sup>C
### I2C_StmMasterArduinoSlave
- Communicate STM32 MCU (*master*) with Arduino (*slave*)
- Use sequential transmission in DMA mode (`SEQ_COM_DMA`)
- Use no sequential transmission in DMA mode (`COM_DMA`)
- Use no sequential transmission in interrupt mode (`COM_INT`)

### I2C_DeviceScanner
- Scan for devices in the I<sup>2</sup>C network