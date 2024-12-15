#include <stdio.h>

int get_input_integer();

int main(void) {
    int val = get_input_integer();

    switch (val) {
        case 1:
            puts("A");
            break;
        case 11:
            puts("J");
            break;
        case 12:
            puts("Q");
            break;
        case 13:
            puts("K");
            break;
        default:
            printf("%d\n", val);
            break;
    }
    
    return 0;
}

int get_input_integer() {
    puts("Please enter the integer(1~13)");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val;
    sscanf(buf, "%d", &val);
    return val;
}