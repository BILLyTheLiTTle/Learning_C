#include <stdio.h>
// See also here (https://stackoverflow.com/questions/58522758/termination-character-in-char-array)
int main(int argc, char const *argv[]) {
  char hello[6] = {'h', 'e', 'l', 'l', 'o', '\n'}; //undefined behavior
  char bye[5] = {'b', 'y', 'e', '\n', '\0'};
  char end[] = "end";
  char dot = '.';
  char oops[] = {'o', 'o', 'p', 's'}; //undefined behavior

  printf("%s\n", hello);
  printf("%s\n", bye);
  printf("%s\n", end);
  printf("%s\n", dot); // undefined behavior (use %c instead of %s)
  printf("%s\n", oops);
  return 0;
}
