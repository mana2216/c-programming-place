#include <stdio.h>
#include <stdlib.h>

typedef struct NameList_tag {
    size_t name_length;
    char *name;
    int age;
} NameList;

int main(void) {
    FILE *fp = fopen("test-2.bin", "wb+");
    if (fp == NULL) {
        fputs("ファイルオープンに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    static const NameList name_list = {
        4, "John", 29
    };

    if (fwrite(&(name_list.age), sizeof(size_t), 1, fp) < 1) {
        fputs("バイナリファイルへの書き込みに失敗しました1\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fwrite(name_list.name, sizeof(char), 5, fp) < 5) {
        fputs("バイナリファイルへの書き込みに失敗しました2\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fwrite(&(name_list.age), sizeof(int), 1, fp) < 1) {
        fputs("バイナリファイルへの書き込みに失敗しまいした3\n", stderr);
        exit(EXIT_FAILURE);
    }

    if (fseek(fp, 0L, SEEK_SET) != 0) {
        fputs("ファイルポジションの移動に失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }

    size_t n_size;
    char n[10];
    int a;

    if (fread(&n_size, sizeof(size_t), 1, fp) < 1) {
        if (feof(fp)) {
            puts("バイナリファイルの終わりに達しました");
        } else {
            fputs("バイナリファイルの読み込みに失敗しました1\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    if (fread(n, sizeof(char), 5, fp) < 5) {
        if (feof(fp)) {
            puts("バイナリファイルの終わりに達しました");
        } else {
            fputs("バイナリファイルの読み込みに失敗しました2\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    if (fread(&a, sizeof(int), 1, fp) < 1) {
        if (feof(fp)) {
            puts("バイナリファイルの終わりに達しました");
        } else {
            fputs("バイナリファイルの読み込みに失敗しました3\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    printf("%zu, %s, %d\n", n_size, n, a);

    if (fclose(fp) == EOF) {
        fputs("ファイルクローズに失敗しました\n", stderr);
        exit(EXIT_FAILURE);
    }
    
    return 0;
}