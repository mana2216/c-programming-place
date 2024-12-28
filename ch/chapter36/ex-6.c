#include <stdio.h>
#include <stdlib.h>

#define ROW_NUM 8
#define COL_NUM 8

void init_grid(char *grid);
void print_grid(char *grid);

int main(void) {
    char *grid = calloc(ROW_NUM * COL_NUM, sizeof(char));
    if (grid == NULL) {
        fputs("callocが失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    init_grid(grid);

    print_grid(grid);
    
    return 0;
}

void init_grid(char *grid) {
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            grid[i * ROW_NUM + j] = '_';
        }
    }
    grid[ROW_NUM * 3 + 3] = 'o';
    grid[ROW_NUM * 3 + 4] = '#';
    grid[ROW_NUM * 4 + 3] = '#';
    grid[ROW_NUM * 4 + 4] = 'o';
}

void print_grid(char *grid) {
    for (int i = 0; i < ROW_NUM; i++) {
        for (int j = 0; j < COL_NUM; j++) {
            printf("%c ", grid[i * ROW_NUM + j]);
        }
        printf("%s", "\n");
    }
}