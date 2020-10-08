# ADC_InterruptMode

## Learning Outcomes
In this application the target is to:
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In interrupt mode

## Issues
According to `clive1`'s response [here](https://community.st.com/s/question/0D50X00009XkXPdSAN/how-to-read-multi-chanel-adc-with-interrupt-mode-without-using-dma) my solution seems to be hackerish and should not stick with it. Instead I should have worked with multiple ADCs.

Long story short:
> Ok, well good luck with that, the part is designed to use DMA in such situations as the EOC will likely saturate and overrun, or you'll lose synchronization.
>
> You could use multiple ADCx if the part/configuration allows.
> - clive1 (NFA Crew)