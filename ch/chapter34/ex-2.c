#include <stdio.h>
#include <assert.h>

int my_memcmp(const void *s1, const void *s2, size_t size);

int main(void) {
    char s1[] = "abcde";
    char s2[] = "abcde";
    size_t size = sizeof(s1);
    if (my_memcmp(s1, s2, size) == 0) {
        puts("same");
    } else {
        puts("different");
    }
    
    return 0;
}

int my_memcmp(const void *s1, const void *s2, size_t size) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;

    for (int i = 0; i < (int)size; i++) {
        if (*p1 != *p2) {
            return *p1 < *p2 ? -1 : 1;
        }
    }

    return 0;
}