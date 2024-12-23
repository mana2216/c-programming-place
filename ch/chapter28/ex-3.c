#include <stdio.h>

#define SWAP(a, b) int tmp = a; \
                    a = b;      \
                    b = tmp;

int main(void) {
    int a = 1;
    int b = 99;
    SWAP(a, b);

    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}