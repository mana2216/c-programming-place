#include <stdio.h>

int main(void) {
  puts("Please enter the integer");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int val;
  sscanf(buf, "%d", &val);

  if (val % 2 != 0 && val >= 200 && val < 500) {
    puts("OK");
  }
  
  return 0;
}