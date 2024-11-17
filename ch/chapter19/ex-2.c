#include <stdio.h>
#include <limits.h>

int main(void) {
  if (CHAR_MIN < 0) {
    puts("char型は符号付き");
  } else {
    puts("char型は符号なし");
  }
  
  return 0;
}