#include <stdio.h>

void countup_print();

int main(void) {
    for (int i = 0; i < 10; i++) {
        countup_print();
    }
    return 0;
}

void countup_print() {
    static int count = 0;
    printf("%d\n", count);
    count++;
}