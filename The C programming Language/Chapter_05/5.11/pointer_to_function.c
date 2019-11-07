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

  /*
  There is no difference between &function and function - they're both addresses.
  https://stackoverflow.com/questions/6293403/in-c-what-is-the-difference-between-function-and-function-when-passed-as-a
  */
  printf("%d\n", addOrSubtract(a, b, //(int (*) (int, int)) // No matter if the code in comment exists
                                //flag ? addThem : subtractThem));
                                // OR
                                flag ? &addThem : &subtractThem));

  flag = 1;
  int (*getter)(int, int) = flag ? addThem : subtractThem; // No problem if the '&' exists before function name
  printf("%d\n", addOrSubtract(a, b, (*getter))); // getter

  return 0;
}

int addThem(int param1, int param2) {
  return (param1 + param2);
}

int subtractThem (int param1, int param2) {
  return (param1 - param2);
}

int addOrSubtract(int param1, int param2, int (*getter)(int, int)) {
  return (*getter)(param1, param2); // or getter(param1, param2);
}
