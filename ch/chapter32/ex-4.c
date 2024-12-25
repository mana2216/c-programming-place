/**
 * 0 : 0x0013D684
 * 1 : 0x0013D688
 * 2 : 0x0013D68C
 * 3 : 0x0013D690
 * 4 : 0x0013D694
 * 5 : 0x0013D698
 * 6 : 0x0013D69C
 * 7 : 0x0013D6A0
 */

#include <stdio.h>

int main(void) {
    int table[] = {0, 10, 20, 30, 40, 50, 60, 70};
    size_t size = sizeof(table) / sizeof(table[0]);
    for (int i = 0; i < (int)size; i++) {
        printf("%d : %p\n", i, &table[i]);
    }
}