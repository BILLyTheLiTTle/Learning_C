#include <stdio.h>

int doSomethingRecursive(int);

int main(int argc, char const *argv[]) {
  int sum = doSomethingRecursive(2);
  printf("Sum: %d\n", sum);
  return 0;
}

int doSomethingRecursive(int seed) {
  static int counter = 0;
  if(seed != 0) {
    printf("Counter (%d) with seed (%d)\n", counter++, seed);
    return seed + doSomethingRecursive(seed-1);
  }
  else {

    return seed;
  }
}
