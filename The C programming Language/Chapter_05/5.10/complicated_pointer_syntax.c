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
  printf("%c\n\n", X ); // c
  printf("%c\n", (*array)[12] ); // d (the array has 10 columns, so 8 is empty but 12 has data!)
  return 0;
}
