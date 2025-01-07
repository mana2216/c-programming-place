#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    long int total = 0;
    for (int i = 1; i < argc; i++) {
        char *end_ptr;
        errno = 0;
        long int val = strtol(argv[i], &end_ptr, 10);
        if (errno == ERANGE || end_ptr == argv[i]) {
            fprintf(stderr, "数値変換ができません。(%s)\n", argv[i]);
            exit(EXIT_FAILURE);
        }

        total += val;
    }

    printf("%ld\n", total);
    
    return 0;
}