#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* return_extention(const char*);

int main(void) {
    const char path[] = "test-4.txt";
    char *extention = return_extention(path);
    if (extention == NULL) {
        fputs("ファイルの拡張子も含めてファイル名を記述してください", stderr);
        exit(EXIT_FAILURE);
    }

    puts(extention);
    
    return 0;
}

char* return_extention(const char* path) {
    char *p = strchr(path, '.');
    if (p != NULL) {
        return p;
    }

    return NULL;
}