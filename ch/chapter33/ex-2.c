#include <stdio.h>
#include <assert.h>

char* my_strcpy(char *dest, const char *src);

int main(void) {
    char dest[40];
    const char src[] = "abcde";
    my_strcpy(dest, src);
    printf("%s\n", dest);
    
    return 0;
}

char* my_strcpy(char *dest, const char *src) {
    assert(dest != NULL && src != NULL);

    const char *p = src;
    int i;
    for (i = 0; p[i] != '\0'; i++) {
        dest[i] = p[i];
    }
    dest[i] = '\0';

    return dest;
}