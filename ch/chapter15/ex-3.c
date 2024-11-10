#include <stdio.h>

int main(void) {
  puts("Please enter the year");
  char buf[40];
  fgets(buf, sizeof(buf), stdin);
  int year;
  sscanf(buf, "%d", &year);

  if (year % 400 == 0 || (year % 4 == 0 && !(year % 100 == 0))) {
    printf("%d年はうるう年です。\n", year);
  } else {
    printf("%d年はうるう年ではありません\n", year);
  }
  
  return 0;
}