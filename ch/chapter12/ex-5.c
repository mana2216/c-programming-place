#include <stdio.h>

int get_input_integer();

int main(void) {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        int val = get_input_integer();
        total += val;
        double avg = (double)total / (i + 1);
        printf("total => %d, average => %.2lf\n", total, avg);
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