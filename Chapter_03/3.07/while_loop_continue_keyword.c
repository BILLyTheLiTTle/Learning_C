#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i = 0;
  while (i < 10) {

    if (i == 5) {
      printf("- %d\n", i);
      i++;
      continue;
    }
    else
      printf("%d\n", i);
    i++;
  }
  return 0;
}
