#include <stdio.h>

int main(void) {
  printf("%s\n", "Please input integer");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  int seconds;
  sscanf(buf, "%d", &seconds);
  int h = seconds / 60 / 60;
  int m = seconds / 60 % 60;
  int s = seconds % 60;
  printf("%d時%d分%d秒\n", h, m, s);
  
  return 0;
}