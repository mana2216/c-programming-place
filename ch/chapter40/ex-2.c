#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    puts("ファイル名を入力してください");
    char path[FILENAME_MAX];
    fgets(path, sizeof(path), stdin);
    char *p = strchr(path, '\n');
    if (p != NULL) {
        *p = '\0';
    }

    FILE *fp = fopen(path, "r");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    for (;;) {
        int c = fgetc(fp);
        if (c == EOF) {
            if (feof(fp)) {
                break;
            } else if (ferror(fp)) {
                fputs("ファイルからの読み込みに失敗しました\n", stderr);
                exit(EXIT_FAILURE);
            } else {
                // そのまま
            }
        }

        printf("%c", (char)c);
    }
    printf("%s", "\n");

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}