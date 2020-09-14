### Description
In this application the target is to:
- Read the same signal (1 voltage divider)
- From 3 different channels (2 channels from the voltage divider, 1 from the direct 3V power source)
- In interrupt mode

According to `clive1`'s response [here](https://community.st.com/s/question/0D50X00009XkXPdSAN/how-to-read-multi-chanel-adc-with-interrupt-mode-without-using-dma) my solution seems to be hackerish and should not stick with it. Instead I should have worked with multiple ADCs.