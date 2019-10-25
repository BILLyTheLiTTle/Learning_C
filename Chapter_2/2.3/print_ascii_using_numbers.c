#include <stdio.h>

int main(int argc, char const *argv[]) {
  // without escape character
  char c = 'H';
  int dec = 72;
  int oct = 0110;
  int hex = 0x48;
  int bin = 0b1001000;

  printf("The character is %c\n", c);
  printf("72 = %c\n", dec);
  printf("0110 = %c\n", oct);
  printf("0x48 = %c\n", hex);
  printf("0b1001000 = %c\n\n", bin);

  // with escape character
  char h = '\x48'; // H in hex escape sequence
  printf("\\x48 = %c\n", h); // H in oct escape sequence
  char o = '\110';
  printf("\\110 = %c\n", o);

  return 0;
}
