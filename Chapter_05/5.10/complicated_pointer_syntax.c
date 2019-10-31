#include <stdio.h>

int main(int argc, char const *argv[]) {
  char array[3][10] = { {"qwerty"},
                        {"asdfgh"},
                        {"zxcvbn"} };

  char x = *(array[2] + 1); // *array[2] = z
  char X = (*(array + 2))[2];

  printf("%c\n", (*array)[0] ); // q
  printf("%c\n\n", (*array[0]) ); // q
  printf("%c\n", (*array)[1] ); // w
  printf("%c\n\n", (*array[1]) ); // a
  printf("%c\n", x ); // x
  printf("%c\n", X ); // c
  return 0;
}
