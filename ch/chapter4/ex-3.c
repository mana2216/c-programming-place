#include <stdio.h>

int main(void) {
  printf("%s", "Please input character >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  printf("%s", buf);
  printf("%s", buf);
  
  return 0;
}