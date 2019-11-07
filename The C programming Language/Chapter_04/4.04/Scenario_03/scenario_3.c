#include <stdio.h>

int main(int argc, char const *argv[]) {

  int a;
  extern int b;
  printf("%d\t%d\n", a, b);

  extern int a; // error: extern declaration of 'a' follows declaration with no linkage
  int b; // error: declaration of 'b' with no linkage follows extern declaration
  printf("%d\t%d\n", a, b);

  a = 1;
  b = 2;
  printf("%d\t%d\n", a, b);

  return 0;
}
