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