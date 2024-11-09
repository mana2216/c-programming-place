#include <stdio.h>

// 整数の入力を受け取る
// 戻り値: 標準入力から整数の入力を受け取り、その値を返す。
int get_input_integer(void)
{
    char s[40];
    fgets(s, sizeof(s), stdin);
    int value;
    sscanf(s, "%d", &value);
    return value;
}

int main(void)
{
    puts("Please enter the score.");
    int score = get_input_integer();

    if (score == 100) {
      printf("***\n");
    }
    else if (score >= 70) {
        printf("**\n");
    }
    else if (score >= 40) {
        printf("*\n");
    }
    else if (score < 40) {
      printf("\n");
    }
    else {
      printf("%s\n", "error");
    }
}