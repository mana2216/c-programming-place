#include <stdio.h>

int get_input_integer();

int main(void) {
    int count = get_input_integer();

    while (count > 0) {
        printf("%s", "*");
        count--;
    }
    printf("%s", "\n");
    
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