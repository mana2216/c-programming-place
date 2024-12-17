#include <stdio.h>

int main(void) {
    char s[] = "I am a programmer.";
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);
    
    return 0;
}