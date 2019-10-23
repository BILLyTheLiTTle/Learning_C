#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c = 'C';
  printf("%c - 1 = %c\n", c, c - 1);
  printf("%c + 1 = %c\n", c, c + 1);
  printf("%c + \'1\' = %c\n", c, c + '1');
  printf("%c + \'\\1\' = %c\n", c, c + '\1');
  return 0;
}
