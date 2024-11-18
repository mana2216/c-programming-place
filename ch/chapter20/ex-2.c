#include <stdio.h>

int main(void) {
  float n = 0.0f;
  for (int i = 0; i < 100; i++) {
    printf("%d回目: %.30e\n", i+1, n);
    n += 0.01;
  }
  
  return 0;
}