#include <stdio.h>

#define ARRAY_SIZE 5

int main(void) {
    int values[ARRAY_SIZE] = {13, 27, 75, 27, 48};
    bool flag = false;

    for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        for (int j = i + 1; j < ARRAY_SIZE; j++) {
            if (values[i] == values[j]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            break;
        }
    }

    if (flag) {
        puts("Yes");
    } else {
        puts("No");
    }
    
    return 0;
}