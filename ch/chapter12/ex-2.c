#include <stdio.h>

int main(void) {
  // for文の中のputs関数は実行されない
  for (int i = 0; i < 0; i++) {
    puts("Hello");
  }
  
  return 0;
}