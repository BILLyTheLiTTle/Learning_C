#include <stdio.h>

#define SIZE sizeof(g_ints) > 2 // sizeof can be used here

int g_ints[] = {1, 2};

int main(int argc, char const *argv[]) {
  printf("\n--Sizes--\nchar: %d\nshort: %d\nint: %d\nlong: %d\nlong long: %d\nfloat: %d\ndouble: %d\nlong double: %d\n\n",
    sizeof(char), sizeof(short), sizeof(int), sizeof(long),
    sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));

  int ints[] = {1, 2};
  char chars[] = {'a', 'b'};
  short shorts[] = {1, 2};
  printf("Array of ints: %d\n", sizeof(ints));
  printf("Array of chars: %d\n", sizeof(chars));
  printf("Array of shorts: %d\n\n", sizeof(shorts));

  printf("Is SIZE > 2: %d\n\n", SIZE);

// sizeof cannot be used here
  /* int flag;
  #if SIZE
    flag = 1;
  #else
    flag = 0;
  #endif
  printf("Flag: %d\n\n", flag);*/

  return 0;
}
