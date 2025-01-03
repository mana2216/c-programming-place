#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char buf[5];
    puts("please enter the stirng");
    fgets(buf, sizeof(buf), stdin);
    printf("%s\n", buf);
    abort();
    exit(0);
    
    return 0;
}