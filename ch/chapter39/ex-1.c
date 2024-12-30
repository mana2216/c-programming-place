#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *file_name = "./test-1.txt";
    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    char buf[80];
    if (fgets(buf, sizeof(buf), fp) == NULL) {
        fputs("ファイルからの読み込みに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }

    printf("%s\n", buf);

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}