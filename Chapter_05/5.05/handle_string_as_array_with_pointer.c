#include <stdio.h>

int main(int argc, char const *argv[]) {
  char message[] = "abcdef";
  message[1] = 'B';
  printf("%s\n", message);

  char *pmessage = "abcdef";
  //pmessage[3] = 4; // Uncomment and it never prints the following line
  printf("%s\n", pmessage);

  return 0;
}
