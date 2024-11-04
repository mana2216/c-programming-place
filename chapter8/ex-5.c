#include <stdio.h>

int main(void) {
  printf("%s\n", "Please input character");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  printf("%d\n", buf[0]);
  
  return 0;
}