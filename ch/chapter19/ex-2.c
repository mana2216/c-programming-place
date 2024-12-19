#include <stdio.h>
#include <limits.h>

int main(void) {
    if (CHAR_MIN < 0) {
        puts("signed.");
    } else {
        puts("unsigned.");
    }
    return 0;
}