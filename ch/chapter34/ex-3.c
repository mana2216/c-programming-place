#include <stdio.h>
#include <assert.h>

void* memcpy(void *s1, const void *s2, size_t size);

int main(void) {
    int s1[5];
    int s2[] = {1, 2, 3, 4, 5};

    memcpy(s1, s2, sizeof(s2));

    size_t size = sizeof(s2) / sizeof(s2[0]);

    for (int i = 0; i < (int)size; i++) {
        printf("%d ", s1[i]);
    }
    printf("%s", "\n");
    
    return 0;
}

void* memcpy(void *s1, const void *s2, size_t size) {
    assert(s1 != NULL);
    assert(s2 != NULL);

    char *p1 = s1;
    const char *p2 = s2;

    for (int i = 0; i < (int)size; i++) {
        *p1 = *p2;
        p1++;
        p2++;
    }

    return (void*)s1;
}