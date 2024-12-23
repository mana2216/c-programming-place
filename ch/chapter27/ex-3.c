#include <stdio.h>

int main(void) {
    char str[] = "abcdefghij";

    size_t size = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < size - 2 - i; i++) {
        printf("%c : %c\n", str[i], str[size - 2 - i]);
    }    
    return 0;
}