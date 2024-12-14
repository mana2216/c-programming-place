#include <stdio.h>

int main(void) {
    puts("Please enter the integer.");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", val);
        val *= 2;
    }
    
    return 0;
}