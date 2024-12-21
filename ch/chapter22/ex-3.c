#include <stdio.h>

int g_num = 100;

int main(void) {
    int num = 10;
    printf("%d\n", num);

    printf("%d\n", g_num);
    
    return 0;
}