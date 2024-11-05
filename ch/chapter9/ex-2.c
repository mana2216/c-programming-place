#include <stdio.h>

int pow_num(int value);

int main(void) {
  int ans = pow_num(3);
  printf("%d\n", ans);
  
  return 0;
}

int pow_num(int value) {
  return value * value;
}