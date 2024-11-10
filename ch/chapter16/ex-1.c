#include <stdio.h>

int main(void) {
  puts("Please enter the integer");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int val;
  sscanf(buf, "%d", &val);

  while (val > 0) {
    printf("%s", "*");
    val--;
  }
  printf("%s", "\n");
  
  return 0;
}