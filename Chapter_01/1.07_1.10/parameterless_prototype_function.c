#include <stdio.h>

int getOne(void); // with or without void inside parenthesis seems it has no problem

int main(int argc, char const *argv[]) {
  /* code */
  printf("%d\n", getOne());
  return 0;
}

int getOne() {
  return 1;
}
