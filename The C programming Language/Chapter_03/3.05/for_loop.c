#include <stdio.h>

int main(int argc, char const *argv[]) {
  int j = 0;
  for (int i = 0; i < 10; i++, j++)
    printf("i = %d\n", i);
    printf("j = %d\n", j);
  return 0;
}
