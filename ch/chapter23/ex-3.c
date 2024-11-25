#include <stdio.h>

int main(void) {
#if 0
  puts("1");
  puts("2");
#if 0
  puts("3");
#endif

  puts("4");
#endif
  return 0;
}