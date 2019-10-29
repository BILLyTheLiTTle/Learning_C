#include <stdio.h>

float getFloatOne(void);

float getFloatfromInt(int);
float getFloatfromAnotherInt(); // parameter checking is turned off

int main(int argc, char const *argv[]) {
  /* Compile time error */
  //int f1 = getFloatOne;
  //printf("%f\n", f1);

  printf("%f\n", getFloatfromInt(1.165));
  printf("%f\n", getFloatfromAnotherInt(1.165));

  return 0;
}

float getFloatOne() {
  return 1.0f;
}

float getFloatfromInt(int a) {
  return a + 0.0f;
}

float getFloatfromAnotherInt(int a) {
  return a + 0.0f;
}
