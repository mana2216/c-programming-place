#include <stdio.h>

int main(void) {
  printf("%s\n", "Please input integer");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  int num;
  sscanf(buf, "%d", &num);
  for (int i = 0; i < 5; i++) {
    num *= 2;
    printf("%d\n", num);
  }
  
  return 0;
}