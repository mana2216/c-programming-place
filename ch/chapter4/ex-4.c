#include <stdio.h>

int main(void) {
    puts("Please enter the string.");
    char buf1[80];
    fgets(buf1, sizeof(buf1), stdin);

    puts("Please enter the string.");
    char buf2[80];
    fgets(buf2, sizeof(buf2), stdin);

    printf("%s", buf2);
    printf("%s", buf1);
    
    return 0;
}