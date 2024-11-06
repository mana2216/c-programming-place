#include <stdio.h>

int main(void) {
  printf("%s\n", "Please input integer");
  char buf[80];
  fgets(buf, sizeof(buf), stdin);
  int day;
  sscanf(buf, "%d", &day);
  switch (day)
  {
  case 0:
    puts("日曜日");
    break;
  case 1:
    puts("月曜日");
    break;
  case 2:
    puts("火曜日");
    break;
  case 3:
    puts("水曜日");
    break;
  case 4:
    puts("木曜日");
    break;
  case 5:
    puts("金曜日");
    break;
  case 6:
    puts("土曜日");
    break;
  
  default:
    break;
  }
  
  return 0;
}