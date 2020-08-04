/**
 * Analog Example for Arduino
 * 
 * Produces a sinewave on pin A2 of the Nucleo-F446RE.
 * 
 * To run: open in the Arduino software. Click Upload.
 * 
 * Copyright (c) 2018 Saleae, Inc.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

// Pins
const int DAC_PIN = A2;

// Parameters
const int DAC_BITS = 12;        // 12-bit DAC
const int BUF_SIZE = 360;       // Each degree
const float AMPLITUDE = 0.5;    // Normalized to max GPIO voltage
const float OFFSET = 0.5;       // Normalized to max GPIO voltage
const float FREQUENCY = 100.0;  // Hz (not exact due to overhead DAC instructions)

// Calculate delay between DAC updates
const uint16_t DELAY_US = (uint16_t)(((1 / FREQUENCY) / BUF_SIZE) * 1000000); //experiment with "1000000" or "10000"

// Calculate max value of DAC bits
uint16_t dac_range = pow(2, DAC_BITS) - 1;

// Global sinewave buffer
uint16_t sine_buf[BUF_SIZE];

void setup() {

  // Configure DAC with maximum resolution
  //analogWriteResolution(DAC_BITS);

  // Pre-calculate sinewave and store to lookup table
  calc_sinewave(dac_range, sine_buf, BUF_SIZE);
}

void loop() {

  // Write sinewave to DAC at each degree
  for ( int i = 0; i < BUF_SIZE; i++ ) {
    analogWrite(DAC_PIN, sine_buf[i]);
    delayMicroseconds(DELAY_US);
  }
}

// Calculate sinewave
void calc_sinewave(uint16_t range, uint16_t * sinewave, int len) {
  for ( int i = 0; i < len; i++ ) {
    double rad = (PI * i) / 180.0;
    sinewave[i] = (uint16_t)(dac_range * ((AMPLITUDE * cos(rad)) + OFFSET));
  }
}
