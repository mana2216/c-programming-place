#include <stdio.h>

int main(void) {
  printf("%s", "Please input string >> ");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  
  printf("%s", "Please input string >> ");
  char buf2[80];
  fgets(buf2, sizeof(buf2), stdin);

  printf("%s", buf2);
  printf("%s", buf);
  
  return 0;
}