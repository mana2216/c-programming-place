#include <stdio.h>
#include <assert.h>

char* my_strcat(char *s1, const char *s2);

int main(void) {
    char s1[50] = "abcde";
    const char s2[] = "fghijk";
    my_strcat(s1, s2);

    puts(s1);
    
    return 0;
}

char* my_strcat(char *s1, const char *s2) {
    assert(s1 != NULL && s2 != NULL);

    int i;
    for (i = 0; s1[i] != '\0'; i++) {}
    int j;
    for (j = 0; s2[j] != '\0'; j++) {
        s1[i+j] = s2[j];
    }
    s1[i + j] = '\0';

    return s1;
}