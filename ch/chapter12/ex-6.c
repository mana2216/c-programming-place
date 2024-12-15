#include <stdio.h>

int main(void) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%2d ", (i + 1) * (j + 1));
        }
        printf("%s", "\n");
    }
    
    return 0;
}