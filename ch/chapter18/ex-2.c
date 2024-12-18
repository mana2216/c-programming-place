#include <stdio.h>

int main(void) {
    for (int i = 0; i <= 16; i++) {
        printf("%#3o, %3d, %#3x\n", i, i, i);
    }
    
    return 0;
}