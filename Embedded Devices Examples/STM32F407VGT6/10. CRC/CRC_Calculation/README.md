# CRC_Calculation
## Learning Outcomes
In this application the target is to:
- Calculate CRC32 on:
  - A single 32-bit value array
  - A single 8-bit value array
  - Two 32-bit values arrays

## Issues
According to this [video](https://www.youtube.com/watch?v=1WAtFzkfpLI&ab_channel=STMicroelectronics) the CRC calculation should be no problem for 8-bit values. But according to this example, there is a problem! The problem is explained [here](https://community.st.com/s/question/0D53W00000KGxXHSA1/crc-calculation-for-8bit-values) by the memmbers of ST forum.

Long story short:
>In the first case, you calculate CRC from an array of {0x1A100100, 0xqqqqC0AC, 0xqqqqqqqq, 0xqqqqqqqq, 0xqqqqqqqq, 0xqqqqqqqq}, where qq are whatever bytes happen to be in the memory just after raw_data_8_bit[].
>
>In the second case, you calculate CRC from {0x00000000, 0x000000001, 0x00000010, 0x0000001A, 0x000000AC, 0x000000C0}
> - waclawek.jan

and

>sizeof() the arrays is different, the function is taking a word count, not a byte count.​
> - clive1 (NFA Crew)