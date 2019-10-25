#include <stdio.h>

int main(int argc, char const *argv[]) {
  unsigned int x = 72;
  int p = 4; /* from position p, counting from the LSB and count 0 (LSB position), 1, 2, 3, 4, 5, 6, 7 (MSB position) */
  int n = 3; /* n bits */
  unsigned int result = (x >> (p+1-n)) & ~(~0 << n);
  printf("%u\n", result);
  return 0;
}

/*
72 = 01001000 ( I want 010 (010-'010'-00))
p+1-n = 2
x >> 2 = 01001000 >> 2 = 00010010
~0 << n = 11111111 << 3 = 11111000
~11111000 = 00000111
01001000 & 00000111 = 0
*/
