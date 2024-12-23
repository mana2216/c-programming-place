#include <stdio.h>

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

int main(void) {
    int array[] = {1, 2, 3 ,4, 5};
    size_t size = ARRAY_LENGTH(array);

    printf("%zu\n", size);
    
    return 0;
}