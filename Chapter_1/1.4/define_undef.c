#include <stdio.h>

#define NUMBER_0 0
#undef NUMBER_0
#undef N

int main(int argc, char const *argv[]) {
  // Defined and then undef
#ifdef NUMBER_0
  printf("Defined NUMBER_0");
#else
  printf("Undefined NUMBER_0");
#endif

printf("\n");

// Never defined
#ifdef NUMBER
  printf("Defined NUMBER");
#else
  printf("Undefined NUMBER");
#endif

  return 0;
}
