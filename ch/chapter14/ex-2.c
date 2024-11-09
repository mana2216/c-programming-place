#include <stdio.h>

int get_input_integer(void) {
  char s[40];
  fgets(s, sizeof(s), stdin);
  int value;
  sscanf(s, "%d", &value);
  return value;
}

int main(void) {
  puts("Please enter the integer");
  int value = get_input_integer();

  if (value == 0) {
    puts("A");
  } else if (value == 1) {
    puts("B");
  } else if (value == 2) {
    puts("C");
  } else {
    puts("X");
  }
  
  return 0;
}