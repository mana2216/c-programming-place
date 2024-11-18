#include <stdio.h>

int main(void) {
  float n = 0.0f;
  float tmp = 0.01f * 100;
  n += tmp;
  printf("%.1f\n", n);
  
  return 0;
}