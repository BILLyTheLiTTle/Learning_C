#include <stdio.h>

#define LENGTH 7

int main(int argc, char const *argv[]) {
  int c = getchar();

  char name[LENGTH] = {c, ' ', '-', '>', ' ', c, '\n'};

  for(int i = 0; i<LENGTH; i++ ) {
    if (i == LENGTH-2) {
      printf("%d", name[i]);
    }
    else {
      putchar(name[i]);
    }
  }
  return 0;
}
