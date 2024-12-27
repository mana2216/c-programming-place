#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* safe_realloc(void *ptr, size_t size);

int main(void) {
    int *array = malloc(sizeof(int));
    size_t size = sizeof(int) * 10;
    int *p = safe_realloc(array, size);
    array = p;
    p = NULL;

    for (int i = 0; i < (int)size; i++) {
        array[i] = i + 1;
        printf("%d\n", array[i]);
    }

    free(array);
    
    return 0;
}

void* safe_realloc(void *ptr, size_t size) {
    assert(size > 0);

    void *tmp = realloc(ptr, size);
    if (tmp == NULL) {
        free(ptr);
        fputs("reallocが失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    return tmp;
}