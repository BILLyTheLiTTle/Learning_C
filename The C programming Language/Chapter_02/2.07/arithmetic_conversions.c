#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

  printf("--Example 1--\n");
  signed int s_int = -72;
  unsigned int u_int = -72;
  printf("%d\n", s_int); // -72
  printf("%d\n", u_int); // -72
  printf("%u\n", s_int); // 4294967224
  printf("%u\n", u_int); // 4294967224

  printf("\n--Example 2--\n");
  int dec = -87;
  int dec_2 = 4294967209;
  printf("Unsigned Print\n");
  printf("%u\n", dec); // 4294967209
  printf("%u\n", dec_2); // 4294967209
  printf("Signed Print\n");
  printf("%d\n", dec); // -87
  printf("%d\n", dec_2); // -87
  bool dec_comp = (dec == dec_2);
  printf("Dec equality: %d\n", dec_comp); // true

  printf("\n--Example 3--\n");
  bool comp_1 = (-1L > 1UL);
  bool comp_2 = (1UL > -1L);
  printf("Comp 1: %d\nComp 2: %d\n", comp_1, comp_2); // true, false

  printf("\n--Example 4--\n");
  long long num_ll = 1844674407370955161; // +5 for the max
  int num_i = num_ll;
  short num_s = num_ll;
  printf("Num LL: %llu\nNum I:  %u\nNum S:  %hu\n", num_ll, num_i, num_s);
  printf("Num LL:      %llu\nNum I as LL: %llu\nNum S as LL: %llu\n", num_ll, num_i, num_s);
  
  return 0;
}
