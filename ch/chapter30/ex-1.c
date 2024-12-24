#include <stdio.h>

#ifdef NDEBAG
#define my_err_fprintf(str) ((void)0)
#else
#define my_err_fprintf(str) fprintf(stderr, "%s\n", str)
#endif

int main(void) {
    char str[] = "test";
    my_err_fprintf(str);
    
    return 0;
}