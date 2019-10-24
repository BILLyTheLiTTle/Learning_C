#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c = 'C';
  printf("%c - 1 = %c\n", c, c - 1); //B
  printf("%c + 1 = %c\n", c, c + 1); //D
  printf("%c + \'1\' = %c\n", c, c + '1');  //t
  printf("%c + \'\\1\' = %c\n", c, c + '\1'); //D
  return 0;
}
