#include <stdio.h>

int main(int argc, char const *argv[]) {
  union number {
    int ival;
    float fval;
    char *cval;
  } u;

  int i = 2;
  //for (int i = 0; i<3; i++) {
    if (i == 0) {
      u.ival = 4;
      u.fval = 5.5;
      u.cval = "aaaaaa";
    }
    else if (i == 1) {
      u.fval = 5.5;
      u.cval = "aaaaaa";
      u.ival = 4;
    }
    else {
      u.cval = "aaaaaa";
      u.ival = 4;
      u.fval = 5.5;
    }

    // It seems that the last item entered in the shared memory, wins previous assign.
    printf("Integer Scenario %d: %d\n", i, u.ival);
    printf("Float Scenario %d: %f\n", i, u.fval);
    printf("String Scenario %d: %s\n\n", i, u.cval);
  //}
  return 0;
}
