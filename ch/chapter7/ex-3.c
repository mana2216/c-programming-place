#include <stdio.h>

int main(void) {
  int a = 1;
  int b = 8;
  int tmp = a;
  a = b;
  b = tmp;
  printf("a = %d, b = %d\n", a, b);
  
  return 0;
}