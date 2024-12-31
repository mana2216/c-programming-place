#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char path[] = "test-1.txt";
    FILE *fp = fopen(path, "w");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    puts("Please enter the strings");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);

    if (fputs(buf, fp) == EOF) {
        fputs("ファイルへの書き込みに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}