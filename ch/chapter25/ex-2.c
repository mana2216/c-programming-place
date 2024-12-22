#include <stdio.h>

int main(void) {
    char str[] = "abcdef";
    size_t size = sizeof(str) / sizeof(str[0]);
    for (size_t i = 0; i < size - 1; i++) {
        printf("%c\n", str[i]);
    }
    
    return 0;
}