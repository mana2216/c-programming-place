#include <stdio.h>

void countup_print(int num);

int main(void) {
  for (int i = 0; i < 10; i++) {
    countup_print(i);
  }
  
  return 0;
}

void countup_print(int num) {
  printf("%d\n", num);
}