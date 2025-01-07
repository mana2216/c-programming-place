#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fputs("コマンドライン引数が不足しています\n", stderr);
        exit(EXIT_FAILURE);
    }

    FILE *fp_src = fopen(argv[1], "r");
    if (fp_src == NULL) {
        fputs("ファイルオープンに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
    }

    FILE *fp_dest = fopen(argv[2], "w");
    if (fp_dest == NULL) {
        fputs("ファイルオープンに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
    }

    for (;;) {
        char buf[80];
        if (fgets(buf, sizeof(buf), fp_src) == NULL) {
            if (feof(fp_src)) {
                break;
            } else {
                fputs("ファイルの読み込みに失敗しました。\n", stderr);
                exit(EXIT_FAILURE);
            }
        }

        if (fputs(buf, fp_dest) == EOF) {
            fputs("ファイルへの書き込みに失敗しました。\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    if (fclose(fp_src) == EOF) {
        fputs("ファイルクローズに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fclose(fp_dest) == EOF) {
        fputs("ファイルクローズに失敗しました。\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}