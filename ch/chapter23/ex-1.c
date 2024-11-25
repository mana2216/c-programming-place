#include <stdio.h>

#define PI 3.14

int main(void) {
  double r = 3.0;
  double area = r * r * PI;
  printf("%.3lf\n", area);
  
  return 0;
}