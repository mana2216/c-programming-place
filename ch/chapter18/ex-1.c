#include <stdio.h>

int main(void) {
  puts("Please enter the hexdecimal integer.");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  unsigned int hex;
  sscanf(buf, "%x", &hex);
  printf("%#o\n", hex);
  
  return 0;
}