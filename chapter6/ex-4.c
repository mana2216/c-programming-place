#include <stdio.h>

int main(void) {
  char buf[] = "xyz";
  printf("%zu\n", sizeof(buf) / sizeof(buf[0]));
  
  return 0;
}