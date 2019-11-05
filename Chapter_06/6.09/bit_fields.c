#include <stdio.h>

#define FLAG_A 01
#define FLAG_B 02
#define FLAG_C 04

int main(int argc, char const *argv[]) {
  enum { A = 01, B = 02, C = 04 };

  struct {
    unsigned int a : 1;
    unsigned int b : 1;
    unsigned int c : 1;
} flags;
flags.a = 2; // Wrong assignment but still is binary 10
flags.b = 1;
flags.c = 1;

struct {
  unsigned int a : 1;
  unsigned int b : 1;
  unsigned int :0;
  unsigned int c : 1;
} flags_with_boundary;

  printf("Size of Macro Variables: %d\n", sizeof(FLAG_A) + sizeof(FLAG_B) + sizeof(FLAG_C));
  printf("Size of Enum: %d\n", sizeof(A) + sizeof(B) + sizeof(C));
  printf("Size of Struct: %d\n", sizeof(flags));
  printf("A struct Member: %d\n", flags.a); // prints the LSB
  printf("Size of Struct (with boundary - %d): %d\n", sizeof(unsigned int), sizeof(flags_with_boundary));
  return 0;
}
