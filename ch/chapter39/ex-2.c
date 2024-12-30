#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    puts("出力先となるファイル名を入力してください。");
    char path[FILENAME_MAX];
    fgets(path, sizeof(path), stdin);

    path[strlen(path) - 1] = '\0';

    FILE *fp = fopen(path, "w");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    if (fputs("Hello World", fp) == EOF) {
        fputs("ファイルへの書き込みに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}