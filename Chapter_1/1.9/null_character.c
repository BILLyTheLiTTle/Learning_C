#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[]) {
  char hello[6] = {'h', 'e', 'l', 'l', 'o', '\n'}; //without \0 prints some rubbish and the dot (why the dot?)
  char bye[5] = {'b', 'y', 'e', '\n', '\0'};
  char end[] = "end";
  char dot = '.';

  printf("%s\n", hello);
  printf("%s\n", bye);
  printf("%s\n", end);
  printf("%s\n", dot);
  return 0;
}
