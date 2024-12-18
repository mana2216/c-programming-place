#include <stdio.h>

int get_input_integer();

int main(void) {
    while (1) {
        int value = get_input_integer();
        if (value > 0) {
            printf("%d is positive number.\n", value);
        } else if (value < 0) {
            printf("%d is negative number.\n", value);
        } else {
            break;
        }
        
    }
    
    return 0;
}

int get_input_integer() {
    puts("Please enter the integer.");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);
    return val;
}