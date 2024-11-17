#include <stdio.h>

int main(void) {
  signed char sc = 10;
  unsigned short us = 10;

  long int n1 = 10L;

  long long int n2 = 10LL;

  unsigned long int n3 = 10LU;

  long int n4 = 10 + n1;

  long long int n5 = n2 + n3;

  int n6 = sc * 2;

  int n7 = sc * us;

  long long int n8 = sc + 100LL/ 2U;

  printf("%zu\n", sizeof(unsigned short));

  return 0;
}