#include <stdio.h>

int main(void) {
    constexpr int length = 10;
    int array[length] = {};
    int num = 2;
    for (int i = 0; i < length; i++) {
        array[i] = num;
        num *= 2;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}