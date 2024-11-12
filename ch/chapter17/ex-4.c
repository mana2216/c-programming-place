#include <stdio.h>

int main(void) {
  int i = 0;

  for (;;) {
    printf("%d\n", i);
    i++;
    if (i >= 10) {
      break;
    } 
  }
  
  return 0;
}