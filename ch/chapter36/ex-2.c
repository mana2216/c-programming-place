#include <stdio.h>
#include <stdlib.h>

#define COL_NUM 9
#define ROW_NUM 9

int main(void) {
    int **array = calloc(ROW_NUM, sizeof(int*));
    if (array == NULL) {
        fputs("callocに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < ROW_NUM; i++) {
        array[i] = calloc(COL_NUM, sizeof(int));
    }

    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            array[i][j] = (i + 1) * (j + 1);
        }
    }

    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            printf("%2d ", array[i][j]);
        }
        printf("%s", "\n");
    }

    for (int i = 0; i < ROW_NUM; i++) {
        free(array[i]);
    }

    free(array);
    
    return 0;
}