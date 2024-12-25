#include <stdio.h>

int main(void) {
    char str[] = "abcde";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}