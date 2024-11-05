#include <stdio.h>

int main(void) {
  printf("%s", "Please input two integers\n");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  int num1;
  int num2;
  sscanf(buf, "%d%d", &num1, &num2);
  int ans = num1 + num2;
  printf("%d\n", ans);
  
  return 0;
}