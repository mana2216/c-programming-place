#include <stdio.h>
#include <stdlib.h>

#define ROW_NUM 9
#define COL_NUM 9

int main(void) {
    int **array = calloc(ROW_NUM, sizeof(int*));
    if (array == NULL) {
        fputs("callocが失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < ROW_NUM; i++) {
        array[i] = calloc(COL_NUM, sizeof(int));
        if (array[i] == NULL) {
            fputs("callocに失敗しました", stderr);
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            printf("%p ", &array[i][j]);
        }
        printf("%s", "\n");
    }

    for (int i = 0; i < ROW_NUM; i++) {
        free(array[i]);
    }

    free(array);
    
    return 0;
}