#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("test-1.txt", "a");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fputs("hello world\n", fp) == EOF) {
        fputs("ファイルへの書き込みに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}