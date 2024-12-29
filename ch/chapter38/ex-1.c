#include <stdio.h>
#include <stdlib.h>

void main_proc_for_easy(int score);
void main_proc_for_normal(int score);
void main_proc_for_hard(int score);

int main(void) {
    void (*array[])(int) = {
        main_proc_for_easy,
        main_proc_for_normal,
        main_proc_for_hard
    };

    puts("Please enter the number of mode (0~2)");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int mode;
    sscanf(buf, "%d", &mode);
    if (mode < 0 || 2 < mode) {
        fputs("0~2の間で数値を入力してください", stderr);
        exit(EXIT_FAILURE);
    }

    puts("Please enter the score(0 ~ 100)");
    fgets(buf, sizeof(buf), stdin);
    int score;
    sscanf(buf, "%d", &score);
    if (score < 0 || 100 < score) {
        fputs("0~100の間で数値を入力してください", stderr);
        exit(EXIT_FAILURE);
    }

    array[mode](score);
    
    return 0;
}

void main_proc_for_easy(int score) {
    if (40 <= score) {
        puts("合格");
    } else {
        puts("不合格");
    }
}

void main_proc_for_normal(int score) {
    if (60 <= score) {
        puts("合格");
    } else {
        puts("不合格");
    }
}

void main_proc_for_hard(int score) {
    if (80 <= score) {
        puts("合格");
    } else {
        puts("不合格");
    }
}