#include <stdio.h>

int main(void) {
    puts("Please enter the integer.");
    char buf[80];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);

    printf("%d\n", val * val * val);
    
    return 0;
}