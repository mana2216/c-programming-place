#include <stdio.h>
#include <stdlib.h>

#define MAX_CAPABILITY 1000

int main(void) {
    int capability = 10;
    long *array = malloc(sizeof(long) * capability);

    if (array == NULL) {
        fputs("mallocが失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    int size = 0;
    long total = 0;

    while (1) {
        if (MAX_CAPABILITY < capability) {
            puts("最大の件数に到達しました。終了します。");
            break;
        }

        puts("Please enter the integer.");
        char buf[40];
        fgets(buf, sizeof(buf), stdin);
        long num;
        sscanf(buf, "%ld", &num);

        if (num < 0) {
            puts("負の数が入力されました。終了します。");
            break;
        }

        total += num;

        size++;

        if (capability <= size) {
            capability *= 2;
            long *tmp = realloc(array, sizeof(long) * capability);
            if (tmp == NULL) {
                fputs("reallocが失敗しました", stderr);
                exit(EXIT_FAILURE);
            }
            array = tmp;
            tmp = NULL;
        }

        array[size - 1] = num;
    }

    long *p = realloc(array, sizeof(long) * size);
    if (p == NULL) {
        fputs("reallocが失敗しました", stderr);
        exit(EXIT_FAILURE);
    }
    array = p;
    p = NULL;

    printf("平均 : %ld\n", total / size);

    free(array);
    
    return 0;
}