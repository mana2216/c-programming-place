#include <stdio.h>

int main(void) {
    puts("Please enter the two integer.");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val1;
    int val2;
    sscanf(buf, "%d%d", &val1, &val2);

    printf("val1 = %d, val2 = %d\n", val1, val2);

    int tmp = val1;
    val1 = val2;
    val2 = tmp;

    printf("val1 = %d, val2 = %d\n", val1, val2);
    
    return 0;
}