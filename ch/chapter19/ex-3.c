// signed char は int に整数拡張されるから計算はうまくいく

#include <stdio.h>

int main(void) {
    signed char c1 = 120;
    signed char c2 = 60;
    signed char c3 = -100;
    signed char result = c1 + c2 + c3;

    printf("c1 + c2 = %hd\n", c1 + c2);
    printf("%hd\n", result);
    
    return 0;
}