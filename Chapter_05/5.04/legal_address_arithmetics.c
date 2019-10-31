#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {2, 1};
  printf("&a[0] < &a[1] is correct: %d\n", (&a[0] < &a[1])); // true
  return 0;
}
