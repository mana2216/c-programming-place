#include <stdio.h>

int get_input_integer();

int main(void) {
    puts("Please enter the integer.");
    int val = get_input_integer();

    if (val % 2 == 0 && val >= 200 && val < 500) {
        puts("OK!");
    }
    
    return 0;
}

int get_input_integer() {
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);
    return val;
}