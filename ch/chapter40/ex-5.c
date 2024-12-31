#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    const char src[] = "src-5.txt";
    const char dest[] = "dest-5.txt";

    FILE *fp_src = fopen(src, "r");
    if (fp_src == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    FILE *fp_dest = fopen(dest, "w");
    if (fp_dest == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    for (;;) {
        char buf[80];
        if (fgets(buf, sizeof(buf), fp_src) == NULL) {
            if (feof(fp_src)) {
                break;
            } else {
                fputs("ファイルからの読み込みに失敗しました\n", stderr);
                exit(EXIT_FAILURE);
            }
        }
        char *p = strchr(buf, '\t');
        if (p != NULL) {
            *p = 0x20;
        }

        if (fputs(buf, fp_dest) == EOF) {
            fputs("ファイルへの書き込みに失敗しました\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    if (fclose(fp_src) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(fp_dest) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}