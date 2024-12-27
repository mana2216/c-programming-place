#include <stdio.h>
#include <stdlib.h>

int main(void) {
    size_t size = 10;
    size_t count = 0;
    int *values = malloc(sizeof(int) * size);
    if (values == NULL) {
        fputs("動的領域の確保に失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    while (1) {
        puts("Please enter the integer.");
        char buf[40];
        fgets(buf, sizeof(buf), stdin);
        int val;
        sscanf(buf, "%d", &val);

        if (val < 0) {
            puts("入力を終了します。");
            break;
        }

        count++;

        if (count <= size) {
            size *= 2;
            int *tmp = realloc(values, size * sizeof(int));
            if (values == NULL) {
                free(tmp);
                fputs("reallocに失敗しました", stderr);
                exit(EXIT_FAILURE);
            }
            values = tmp;
            tmp = NULL;
        }


        values[count - 1] = val;
    }

    for (int i = 0; i < (int)count; i++) {
        printf("%d\n", values[i]);
    }

    free(values);
    
    return 0;
}