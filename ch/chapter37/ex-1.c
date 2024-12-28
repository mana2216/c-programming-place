#include <stdio.h>
#include <stddef.h>

struct Data_tag1 {
    char a;
    int b;
    char c[20];
    double d;
    short e;
};

struct Data_tag2 {
    double d;
    int b;
    short e;
    char c[20];
    char a;
};

int main(void) {
    printf("%zu\n", offsetof(struct Data_tag1, a));
    printf("%zu\n", offsetof(struct Data_tag1, b));
    printf("%zu\n", offsetof(struct Data_tag1, c));
    printf("%zu\n", offsetof(struct Data_tag1, d));
    printf("%zu\n", offsetof(struct Data_tag1, e));
    puts("");

    printf("%zu\n", offsetof(struct Data_tag2, d));
    printf("%zu\n", offsetof(struct Data_tag2, b));
    printf("%zu\n", offsetof(struct Data_tag2, e));
    printf("%zu\n", offsetof(struct Data_tag2, c));
    printf("%zu\n", offsetof(struct Data_tag2, a));
    
    return 0;
}