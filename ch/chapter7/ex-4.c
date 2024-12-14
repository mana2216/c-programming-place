#include <stdio.h>

int main(void) {
    int num = 15;
    int num2 = 5;
    int num3 = 30;

    num -= 10;
    num2 += num * 4;
    num3 %= num2 - 5;

    printf("%d %d %d\n", num, num2, num3);
    
    return 0;
}