### Description
In this application the target is to:
- Communicate STM32 MCU (*master*) with Arduino (*slave*)
- Use sequential transmission in DMA mode (`SEQ_COM_DMA`)
- Use no sequential transmission in DMA mode (`COM_DMA`)
- Use no sequential transmission in interrupt mode (`COM_INT`)

You can find the relevant macros (`#define`) in the source code. Uncomment 1 out of 3 each time and run the example.
The Sequential Transmission in DMA does not work well with Arduino as slave.

The `HAL_I2C_AbortCpltCallback(I2C_HandleTypeDef *hi2c)` and `HAL_I2C_ErrorCallback(I2C_HandleTypeDef *hi2c)` exist just for debugging errors during the implementation. I decided to leave them there for a more complete example!

Worth noting that, when I tried to work in DMA using I<sup>2</sup>C3, I kept receiving `Debugger connection lost. Shutting down...` error, so I had to implement the example using I<sup>2</sup>C1.