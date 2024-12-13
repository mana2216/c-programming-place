#include <stdio.h>

int main(void) {
    puts("Please enter the string.");
    char buf[80];
    fgets(buf, sizeof(buf), stdin);
    printf("%s", buf);
    printf("%s", buf);
    
    return 0;
}