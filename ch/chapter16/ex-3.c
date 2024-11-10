#include <stdio.h>
#include <stdbool.h>

int get_input_integer(void);

int main(void) {
  int val = 1;
  do {
    val = get_input_integer();
  } while (val % 5 == 0);
  
  return 0;
}

int get_input_integer(void) {
  puts("Please enter the your integer");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int val;
  sscanf(buf, "%d", &val);

  return val;
}