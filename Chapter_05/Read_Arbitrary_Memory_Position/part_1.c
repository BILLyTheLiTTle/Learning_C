#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10;
  int *pa = 0x61FF14; // should be the address of a variable in hex
  printf("Address: %d -> Value: %d\n", &a, *pa);
  int i = 0;
  scanf("%d\n", i);
  // Copy the address, convert it to hex and paste it into part_2.c and run it
  return 0;
}
