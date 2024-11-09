#include <stdio.h>

int main(void) {
  char c[] = "I am a programmer.";
  int len = sizeof(c);
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    count++;
  }
  printf("%d\n", count);
  
  return 0;
}