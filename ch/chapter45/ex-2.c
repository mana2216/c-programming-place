#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <assert.h>
#include <string.h>

long int my_strtol(char *srt, int radix);

int main(int argc, char *argv[]) {
    if (argc < 4) {
        fputs("コマンドライン引数が不足しています\n", stderr);
        exit(EXIT_FAILURE);
    }

    long int total = 0;

    int flag = 0;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "+") == 0) {
            flag = 1;
            continue;
        } else if (strcmp(argv[i], "-") == 0) {
            flag = 2;
            continue;
        } else if (strcmp(argv[i],"*") == 0) {
            flag = 3;
            continue;
        } else if (strcmp(argv[i],"/") == 0) {
            flag = 4;
            continue;
        }

        long int val = my_strtol(argv[i], 10);

        switch (flag)
        {
        case 1:
            total += val;
            flag = 0;
            break;
        case 2:
            total -= val;
            flag = 0;
            break;
        case 3:
            total *= val;
            flag = 0;
            break;
        case 4:
            if (val == 0) {
                fputs("ゼロ除算になります。\n", stderr);
                exit(EXIT_FAILURE);
            }
            total /= val;
            flag = 0;
            break;
        
        default:
            total = val;
            break;
        }
    }

    printf("%ld\n", total);
    
    return 0;
}

long int my_strtol(char *str, int radix) {
    assert(str != NULL);
    errno = 0;
    char *end_ptr;
    long int val = strtol(str, &end_ptr, radix);
    if (errno == ERANGE || str == end_ptr) {
        fputs("数値変換に失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    return val;
}