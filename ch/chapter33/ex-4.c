#include <stdio.h>
#include <assert.h>

const char* my_strchr(const char *s, int c);

int main(void) {
    const char s[] = "abcde";
    char c = '\0';

    const char *ans = my_strchr(s, c);

    printf("&s[0] = %p\n", &s[0]);

    printf("&ans = %p\n", ans);
    
    return 0;
}

const char* my_strchr(const char *s, int c) {
    assert(s != NULL);

    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == (char)c) {
            return &s[i];
        }
    }

    if ((char)c == '\0' && s[i] == (char)c) {
        return &s[i];
    }

    return NULL;
}