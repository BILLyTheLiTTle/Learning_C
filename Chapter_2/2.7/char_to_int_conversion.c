#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {

  char eta = 'h';
  int eta_dec = eta;
  signed int s_eta_binary = 0b1101000;
  unsigned int u_eta_binary = 0b1101000;

  printf("%c\n", eta); // h
  printf("%c\n", eta_dec); // h
  printf("%c\n", s_eta_binary); // h
  printf("%c\n", u_eta_binary); // h

  printf("\nSIGMA\n");
  int sigma_dec = -87;
  int sigma_dec_2 = 16777129;
  printf("%c (%d)\n", sigma_dec, sigma_dec);
  printf("%c (%d)\n", sigma_dec_2, sigma_dec_2);

  char sigma_1 = sigma_dec;
  char sigma_2 = sigma_dec_2;
  bool dec_comp = (sigma_dec == sigma_dec_2);
  bool char_comp = (sigma_1 == sigma_2);

  printf("Sigma Dec equality: %d\nSigma Char equality: %d\n", dec_comp, char_comp); // false, true
  return 0;
}
