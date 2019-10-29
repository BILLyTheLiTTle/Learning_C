#include <stdio.h>

int getOne(void);

int main(int argc, char const *argv[]) {
  char c = getOne();
  return 0;
}

/* warning: return type defaults to 'int' */
getOne() {
  return 1;
}
