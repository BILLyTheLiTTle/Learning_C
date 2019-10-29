#include <stdio.h>

void getNothing(void);

int main(int argc, char const *argv[]) {
  // compile time error!
  int a = getNothing();
  return 0;
}

void getNothing() {
  printf("Nothing\n");
}
