#include <stdio.h>

#define ENABLE_A // Commenting this line would be a compile time error and not runtime error

#ifdef ENABLE_A
  int a = 1;
#endif

int main(int argc, char const *argv[]) {
  printf("%d\n", a);
  return 0;
}
