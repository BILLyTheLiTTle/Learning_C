#include <stdio.h>

void handleVariable(int sth);
void handleArrayVariable(int sth);
void handleArray(int sth[]);

int main(int argc, char const *argv[]) {
  int array1[2], array2[2];
  array1[0] = array2[0] = 0;
  array1[1] = array2[1] = 1;
  int var = 0;

  printf("Initial value (var): %d\n", var);
  handleVariable(var);
  printf("Final value (var): %d\n", var);
  printf("\n");

  printf("Initial value (array1[0]): %d\n", array1[0]);
  handleVariable(array1[0]);
  printf("Final value (array1[0]): %d\n", array1[0]);
  printf("\n");

  printf("Initial value (array1[1]): %d\n", array1[1]);
  handleArrayVariable(array1[1]);
  printf("Final value (array1[1]): %d\n", array1[1]);
  printf("\n");

  printf("Initial value (array2[0]): %d\n", array2[0]);
  handleArray(array2);
  printf("Final value (array2[0]): %d\n", array2[0]);
  printf("\n");

  printf("Initial value (array2[0]): %d\n", array2[1]);

  return 0;
}

void handleVariable(int sth) {
  ++sth;
}

void handleArrayVariable(int sth) {
  ++sth;
}

void handleArray(int sth[]) {
  ++sth[0];
}
