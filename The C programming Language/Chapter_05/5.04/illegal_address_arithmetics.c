#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10;
  int b = 20;

  int *pa = &a;
  int *pb = &b;

  int *sum =  pa - pb;
  printf("Address (a): %d -> Address(b): %d\n", &a, &b);
  printf("Address: %d -> Value: %d\n", sum, *sum);
  
  return 0;
}
