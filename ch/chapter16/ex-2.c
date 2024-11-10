#include <stdio.h>
#include <stdbool.h>

int get_input_integer(void);

int main(void) {
  while (true) {
    int val = get_input_integer();
    if (val % 5 == 0) {
      puts("OK");
      break;
    } else {
      printf("%s\n", "もう一度整数を入力してください");
    }
  }

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