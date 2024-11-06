#include <stdio.h>

int main(void) {
  int total = 0;

  for (int i = 0; i < 5; i++) {
    printf("%s", "Please input integer >> ");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int value;
    sscanf(buf, "%d", &value);
    total += value;
    int avg = total / (i + 1);
    printf("合計: %d, 平均: %d\n", total, avg);
  }
  
  return 0;
}