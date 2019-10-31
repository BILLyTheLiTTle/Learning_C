#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a[] = {10, 20, 30};
  int *pa = a;

  printf("pa: %d == a: %d == &a[0]: %d\n", pa, a, &a[0]);

  printf("*pa: %d == *a: %d == a[0]: %d\n", *pa, *a, a[0]);

  printf("*(pa+1): %d == *(a+1): %d == a[1]: %d\n", *(pa+1), *(a+1), a[1]);

  printf("&pa: %d !=-> &a: %d\n", &pa, &a);

  return 0;
}
