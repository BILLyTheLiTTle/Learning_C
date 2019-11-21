#include <stdio.h>

/*
This is a simplified version of this (https://stackoverflow.com/questions/58970009/struct-definition/58971470)
*/

int main(int argc, char const *argv[]) {

  // a cannot be re-assigned
  const int a = 1;
  //a = 2; // Compile time eror

  // The pt points into a constant (cannot be re-assigned) value
  const int *pt = &a;
  //*pt = 2; // Compile time error
  pt = &a;

  // The constant (cannot be re-assigned) pt1 points into a regular int value
  int *const pt1 = &a;
  //pt1 = &a; // Compile time error
  *pt1 = 3;

  // The constant (cannot be re-assigned) pt2 points into a constant (cannot be re-assigned) value
  const int *const pt2 = &a;
  //*pt2 = &a;
  //*pt2 = 2;

  printf("%d\n", a);

  return 0;
}
