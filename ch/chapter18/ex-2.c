#include <stdio.h>

int main(void) {
  for (int i = 0; i <= 16; i++) {
    printf("Octal: %#o, decimal: %d, hexdecimal: %#x\n", i, i, i);
  }
  
  return 0;
}