#include <stdio.h>

int addThem(int, int);
int subtractThem(int, int);
int addOrSubtract(int , int, int (*)(int, int));

int main(int argc, char const *argv[]) {
  int a = 10;
  int b = 5;
  int flag = 0;

  printf("-- Get the values from the functions --\n");
  printf("%d + %d = %d\n", a, b, addThem(a, b));
  printf("%d - %d = %d\n\n", a, b, subtractThem(a, b));

  printf("%d\n", addOrSubtract(a, b, //(int (*) (int, int)) // No matter if the code in comment exists
                                flag ? addThem : subtractThem));

  return 0;
}

int addThem(int param1, int param2) {
  return (param1 + param2);
}

int subtractThem (int param1, int param2) {
  return (param1 - param2);
}

int addOrSubtract(int param1, int param2, int (*getter)(int, int)) {
  return (*getter)(param1, param2);
}
