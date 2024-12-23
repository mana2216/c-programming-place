#include <stdio.h>

int main(void) {
    int num = 90;

    printf("%s", num < 100 
            ? "Less than 100.\n"
            : "Over 100.\n"
    );
    
    return 0;
}