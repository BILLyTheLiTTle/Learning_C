#include <stdio.h>

int addThem(int, int);
int subtractThem(int, int);
int doTheSum(int , int, int (*)(int, int));
int doTheSub(int , int, int (*)(int, int));

typedef int (*function1)(int, int);
typedef int function2(int, int);

int main(int argc, char const *argv[]) {
  int a = 10;
  int b = 5;

  printf("-- Get the values from the functions --\n");
  printf("%d + %d = %d\n", a, b, addThem(a, b));
  printf("%d - %d = %d\n\n", a, b, subtractThem(a, b));

  printf("%d\n", doTheSum(a, b, //addThem));
                                // OR
                                &addThem));
  printf("%d\n", doTheSub(a, b, subtractThem));
                                // OR
                                //&subtractThem));

  /*
  There is no difference between &function and function - they're both addresses.
  https://stackoverflow.com/questions/6293403/in-c-what-is-the-difference-between-function-and-function-when-passed-as-a
  */
  // The address-operator '&' requires a variable to take the address from.
  function2 *pointer_to_add_function = (function2 *) addThem(a, b); // don't need the '&' before function name
  printf("The sum as \"variable\": %d\n", *pointer_to_add_function);
  // OR
  function2 *pointer_to_add_function2 = &addThem; // No problem if the '&' exists before function name
  printf("The sum as \"variable\": %d\n", (*pointer_to_add_function2)(a, b));
  // The address-operator '&' requires a variable to take the address from.
  function1 pointer_to_sub_function = (function1) subtractThem(a, b); // don't need the '&' before function name
  printf("The sub as \"variable\": %d\n", *pointer_to_sub_function);

  return 0;
}

int addThem(int param1, int param2) {
  return (param1 + param2);
}

int subtractThem(int param1, int param2) {
  return (param1 - param2);
}

int doTheSum(int param1, int param2, function1 p_add) {
  return (*p_add)(param1, param2); // or p_add(param1, param2);
}

int doTheSub(int param1, int param2, function2 *p_sub) {
  return (*p_sub)(param1, param2); // or p_sub(param1, param2);
}
