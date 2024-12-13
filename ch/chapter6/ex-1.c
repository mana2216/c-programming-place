#include <stdio.h>

int main(void) {
    puts("Please input the intger.");
    char buf[80];
    fgets(buf, sizeof(buf), stdin);
    int val1;
    sscanf(buf, "%d", &val1);

    puts("Please enter the intger.");
    fgets(buf, sizeof(buf), stdin);
    int val2;
    sscanf(buf, "%d", &val2);

    printf("%d\n", val1 + val2);
    
    return 0;
}