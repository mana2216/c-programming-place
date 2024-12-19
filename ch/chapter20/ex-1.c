#include <stdio.h>

int main(void) {
    float n = 0.0f;

    float tmp = 0.01f * 100.0;

    n += tmp;

    printf("%.1lf\n", n);
    
    return 0;
}