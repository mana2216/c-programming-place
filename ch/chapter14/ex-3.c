#include <stdio.h>

int get_input_integer(void);

int main(void) {
  puts("Please enter the integer");
  int value1 = get_input_integer();
  
  puts("Please enter the integer");
  int value2 = get_input_integer();

  int ans = value1 < value2 ? value2 : value1;
  printf("%d\n", ans);
  
  return 0;
}

int get_input_integer(void) {
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int val;
  sscanf(buf, "%d", &val);
  return val;
}