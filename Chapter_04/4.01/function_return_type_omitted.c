#include <stdio.h>

int getOne(void);

int main(int argc, char const *argv[]) {
  char c = getOne();
  return 0;
}

getOne() {
  return 1;
}
