#include <stdio.h>

int main(void) {
    int val = 1;
    for (int i = 0; i < 10; i++) {
        val *= 2;
        printf("%d\n", val);
    }
    
    return 0;
}