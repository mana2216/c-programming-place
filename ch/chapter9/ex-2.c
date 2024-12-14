#include <stdio.h>

int get_input_integer();

int main(void) {
    int val = get_input_integer();
    printf("%d\n", val);
    
    return 0;
}

int get_input_integer() {
    puts("Please enter the integer.");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);
    return val * val;
}