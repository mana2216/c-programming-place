#include <stdio.h>

int get_input_integer();

int main(void) {
    int val1 = get_input_integer();
    int val2 = get_input_integer();

    int ans = val1 < val2 ? val2 : val1;
    printf("%d\n", ans); 
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