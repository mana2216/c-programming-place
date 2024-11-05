#include <stdio.h>

int main(void) {
  printf("%s", "Please input integer\n");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  int num;
  sscanf(buf, "%d", &num);
  printf("%d\n", num * num * num);
  
  return 0;
}