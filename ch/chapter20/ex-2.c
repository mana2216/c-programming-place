#include <stdio.h>

int main(void) {
    float n = 0.0;
    for (int i = 0; i < 100; i++) {
        n += 0.01;
        printf("%3d 回目 : %.30e\n", i+1, n);
    }
    
    return 0;
}