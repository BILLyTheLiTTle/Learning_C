#include <stdio.h>

int main(int argc, char const *argv[]) {
  int *c = 0x61FF14; // paste the copied address from part_1.c
  printf("Address: %d -> Value: %d\n", c, *c);
  return 0;
}
