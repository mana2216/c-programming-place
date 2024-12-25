#include <stdio.h>
#include <assert.h>

int my_strcmp(const char *s1, const char *s2);

int main(void) {
    const char *s1 = "abcde";
    const char *s2 = "abcde";
    if (my_strcmp(s1, s2) == 0) {
        puts("same");
    } else {
        puts("different");
    }
    
    return 0;
}

int my_strcmp(const char *s1, const char *s2) {
    assert(s1 != NULL && s2 != NULL);

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] < s2[i] ? -1 : 1;
        }
    }

    return 0;
}