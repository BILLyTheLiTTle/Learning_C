# Table of Contents

## 1. [Quick Test](01.%20Quick%20Test)
### [OnBoardLEDsAndButtons](01.%20Quick%20Test/OnBoardLEDsAndButtons/)
- On Board LEDs
- On Board Button
- Interrupts
### [OnBoardLEDsBitBanding](01.%20Quick%20Test/OnBoardLEDsBitBanding)
- On Board LEDs with bit-banding

## 2. [Interrupts Management](02.%20Interrupts%20Management)
### [Interrupts_PrioritiesSubpriorities](02.%20Interrupts%20Management/Interrupts_PrioritiesSubpriorities)
- Handle 3 different external LEDs and variables using 3 different interrupts
- Mix priorities and subpriorities

## 3. [UART/USART Communication](03.%20U(S)ART%20Communication)
### [UART_PollingMode](03.%20U(S)ART%20Communication/UART_PollingMode)
- Polling UART
- UART Errors (Failed)
### [UART_InterruptMode](03.%20U(S)ART%20Communication/UART_InterruptMode)
- UART in interrupt mode
- Transmit/Receive Callback Functions
- UART Errors
### [UART_DMAInterruptMode](03.%20U(S)ART%20Communication/UART_DMAInterruptMode)
- UART in interrupt mode with DMA
- Transmit/Receive Callback Functions
- UART Errors

## 4. [DMA](04.%20DMA)
### [DMA_MemoryToMemory](04.%20DMA/DMA_MemoryToMemory)
- Read from Flash and write to SRAM
- Using DMA
- Understand the source/destination increment

## 5. [Clock Tree](05.%20Clock%20Tree)
### [ClockExperiments](05.%20Clock%20Tree/ClockExperiments)
- Change Clock settings
- Export the clock to MCO
- Count the clock pulses

## 6. [Timers](06.%20Timers)
### [Timers_BasicTimerInterruptMode](06.%20Timers/Timers_BasicTimerInterruptMode)
- Create Basic Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency
### [Timers_GeneralPurposeTimerInterruptMode](06.%20Timers/Timers_GeneralPurposeTimerInterruptMode)
- Create General Purpose Timer
- In interrupt mode
- At each UEV send signal (1) to a pin
- Count the frequency
### [Timers_GeneralPurposeTimerInterruptDMAMode](06.%20Timers/Timers_GeneralPurposeTimerInterruptDMAMode)
- Create General Purpose Timer
- In interrupt mode
- In DMA mode
- Toggle all on-board LEDs
### [Timers_GeneralPurposeMasterSlaveTimer](06.%20Timers/Timers_GeneralPurposeMasterSlaveTimer)
- Create General Purpose Master Timer (TIM1)
- Create General Purpose Slave Timer (TIM2)
- Generate Event from the TIM1 using `HAL_TIM_GenerateEvent` function
- Count the frequency
### [Timers_GeneralPurposeTimerCaptureMode](06.%20Timers/Timers_GeneralPurposeTimerCaptureMode)
- Create General Purpose Timer in Capture Mode
- Measure the frequency
### [Timers_GeneralPurposeTimerOutputCompareMode](06.%20Timers/Timers_GeneralPurposeTimerOutputCompareMode)
- Create General Purpose Timer with 4 channels in Output Compare Mode
- Change the CCR, ARR values
- Check the output with a logic analyzer
### [Timers_GeneralPurposeTimerPwmMode](06.%20Timers/Timers_GeneralPurposeTimerPwmMode)
- Create 4 different PWM pulses from the same timer
- Check the output with a logic analyzer
### [Timers_GeneralPurposeTimerOnePulseMode](06.%20Timers/Timers_GeneralPurposeTimerOnePulseMode)
- Get triggered by event
- Create 1 pulse after specific delay
- Check the output with a logic analyzer
### [Timers_SysTickTimer](06.%20Timers/Timers_SysTickTimer)
- Toggle a pin every 1ms using SysTick timer
- Check the output and verify this 1ms toggling with a logic analyzer
- Change the SysTick to a different timer (using CubeMX) and run again if you wish
### [Timers_IWDG](06.%20Timers/Timers_IWDG)
- Use on-board LEDs to verify that the IWDG is getting refreshed in time without using the window option
### [Timers_WWDG](06.%20Timers/Timers_WWDG)
- Use on-board LEDs to verify that the WWDG is getting refreshed in time
- Calculate the time to refresh by hand
- Use IRQ functions (`HAL_WWDG_IRQHandler` / `HAL_WWDG_EarlyWakeupCallback`)

## 7. [ADC](07.%20ADC)
### [ADC_InterruptMode](07.%20ADC/ADC_InterruptMode)
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In interrupt mode
### [ADC_DMAMode](07.%20ADC/ADC_DMAMode)
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In DMA mode
### [ADC_TimerTriggerDMADiscontinuousMode](07.%20ADC/ADC_TimerTriggerDMADiscontinuousMode)
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- Use a timer as a trigger every 5 seconds
- In Discontinuous mode (1 channel at a time)
- In DMA mode

## 8. [I<sup>2</sup>C](08.%20I2C)
### [I2C_StmMasterArduinoSlave](08.%20I2C/I2C_StmMasterArduinoSlave)
- Communicate STM32 MCU (*master*) with Arduino (*slave*)
- Use sequential transmission in DMA mode (`SEQ_COM_DMA`)
- Use no sequential transmission in DMA mode (`COM_DMA`)
- Use no sequential transmission in interrupt mode (`COM_INT`)
### [I2C_DeviceScanner](08.%20I2C/I2C_DeviceScanner)
- Scan for devices in the I<sup>2</sup>C network
### [I2C_StmSlaveArduinoMaster](08.%20I2C/I2C_StmSlaveArduinoMaster)
- Communicate STM32 MCU (*slave*) with Arduino (*master*)
- Use sequential transmission in DMA mode (`SEQ_COM_DMA`)
- Use no sequential transmission in DMA mode (`COM_DMA`)
- Use no sequential transmission in interrupt mode (`COM_INT`)

## 9. [SPI](09.%20SPI)
### [SPI_StmMasterArduinoSlave](09.%20SPI/SPI_StmMasterArduinoSlave)
- Communicate STM32 MCU (*master*) with Arduino (*slave*)
- Software pin is used as CS
### [SPI_StmSlaveArduinoMaster](09.%20SPI/SPI_StmSlaveArduinoMaster)
- Communicate STM32 MCU (*slave*) with Arduino (*master*)

## 10. [CRC](10.%20CRC)
### [CRC_Calculation](10.%20CRC/CRC_Calculation)
- Calculate CRC32 on:
  - A single 32-bit value array
  - A single 8-bit value array
  - Two 32-bit values arrays
  
## 11. [Power Management](11.%20Power%20Management)
  
