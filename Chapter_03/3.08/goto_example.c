#include <stdio.h>

int main(int argc, char const *argv[]) {

  /* This runs also at the first time the program is executed */
  int oops_counter = 0;
  oops:
    printf("Oops!\n");
  printf("Entered in Oops: %d\n", ++oops_counter);

  /* This is executed always after the oops label execution. */
  int i = 0;

  while (i < 10) {
    if (i == 3) goto oops; /* and executes again the whole program */
    printf("number = %d\n", i++);
  }
  return 0;
}
