#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10;
  int *pa = &a;
  int **ppa = &pa;
  printf("%d\n", *&a);
  return 0;
}
