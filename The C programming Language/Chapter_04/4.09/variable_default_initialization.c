#include <stdio.h>

extern int extern_var_in_def;
extern int extern_var_out_def;
int extern_var_out_def;
int g_var;
static int static_var;

int main(int argc, char const *argv[]) {
  int extern_var_in_def;
  int auto_var;
  printf("Extern variable (outer definition): %d\n", extern_var_out_def); // 0
  printf("Extern variable (inner definition): %d\n", extern_var_in_def); // garbage
  printf("Global variable: %d\n", g_var); // 0
  printf("Static variable: %d\n", static_var); // 0
  printf("Auto variable: %d\n", auto_var); // garbage
  return 0;
}
