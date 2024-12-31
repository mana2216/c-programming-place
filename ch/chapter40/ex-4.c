#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char src_path[FILENAME_MAX];
    puts("コピー元のファイル名を入力してください");
    fgets(src_path, sizeof(src_path), stdin);
    char *p = strchr(src_path, '\n');
    if (p != NULL) {
        *p = '\0';
    }

    FILE *src_fp = fopen(src_path, "r");
    if (src_fp == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    const char dest[] =  "dest-4.txt";

    FILE *dest_fp = fopen(dest, "w");
    if (dest_fp == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    for (;;) {
        int c = fgetc(src_fp);
        if (c == EOF) {
            if (feof(src_fp)) {
                break;
            } else if (ferror(src_fp)) {
                fputs("ファイルからの読み込みに失敗しました\n", stderr);
                exit(EXIT_FAILURE);
            } else {
                // そのまま
            }
        }

        if (fputc(c, dest_fp) == EOF) {
            fputs("ファイルへの書き込みに失敗しました\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    if (fclose(src_fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(dest_fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}