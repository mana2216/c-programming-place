/*
0x3c5
16^2*3 + 16 * 12 + 5 => 768 + 192 + 5 => 965

0741
8^2*7 + 8 * 4 + 1 => 448 + 32 + 1 => 481

0x3c5 * 26 - 0741 => 965 * 26 - 481 => 24,609
*/

#include <stdio.h>

int main(void) {
  int hex = 0x3c5;
  int decimal = 26;
  int octal = 0741;

  int ans = hex * decimal - octal;
  printf("%d\n", ans);
  
  return 0;
}