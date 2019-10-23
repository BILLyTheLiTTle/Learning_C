/* This is not a good example of what extern is.
Try reading this (https://www.quora.com/Whats-the-use-of-extern-with-variable-in-C)
and when you have a problem understanding what the linker is read this (https://www.quora.com/What-is-a-linker-in-C-programming)!
*/
#include <stdio.h>
#include "myheader.h"

extern int a;
int b = 100;
int c;

int external = 5;

int printThem(void);

int main(int argc, char const *argv[]) {
  int a = 1;
  a++;
  b++;
  extern int c;
  c = 10000;
  printThem();

  printf("\n");

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  return 0;
}

int printThem() {
  int a = 10;
  printf("a (f) = %d\n", a);
  printf("b (f) = %d\n", b);
  c = 1000000;
  printf("c (f) = %d\n", c);
  printf("external (f) = %d\n", external);
}
