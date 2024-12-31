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

    int line_count = 0;
    puts("読み取る行番号を入力してください");
    char s[40];
    fgets(s, sizeof(s), stdin);
    int line;
    sscanf(s, "%d", &line);

    for (;;) {
        char buf[40];
        
        if (line < line_count) {
            break;
        } else if (line_count < line) {
            if (fgets(buf, sizeof(buf), fp) == NULL) {
                if (feof(fp)) {
                    break;
                } else {
                    fputs("ファイルからの読み込みに失敗しました\n", stderr);
                    exit(EXIT_FAILURE);
                }
            }
            line_count++;
            continue;
        } else {
            if (fgets(buf, sizeof(buf), fp) == NULL) {
                if (feof(fp)) {
                    break;
                } else {
                    fputs("ファイルからの読み込みに失敗しました\n", stderr);
                    exit(EXIT_FAILURE);
                }
            }

            char *c = strchr(buf, '\n');
            if (c != NULL) {
                *c = '\0';
            }

            printf("%s\n", buf);

            break;
        }
    }

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}