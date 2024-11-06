#include <stdio.h>

int main(void) {
  int value = 0;

  // 0~4までの足し算
  for (int i = 0; i < 5; i++) {
    value += i;
  }
  printf("%d\n", value);
  
  return 0;
}