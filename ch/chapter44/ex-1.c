#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char path[] = "test-1.txt";
    if (remove(path) != 0) {
        fputs("ファイルの削除に失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}