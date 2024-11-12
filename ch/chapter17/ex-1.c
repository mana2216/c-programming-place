#include <stdio.h>

int main(void) {
  int value = 0;

  while (1) {
    puts("Please enter the integer.");
    char input_sting[32];
    fgets(input_sting, sizeof(input_sting), stdin);
    sscanf(input_sting, "%d", &value);

    if (value == 0) {
      break;
    } else if (value > 0) {
      printf("%d is positive number. \n", value);
    } else if (value < 0) {
      printf("%d is negative number.\n", value);
    }
  }
  
  return 0;
}