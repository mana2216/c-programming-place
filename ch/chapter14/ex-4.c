#include <stdio.h>

int get_input_integer() {
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int value;
    sscanf(buf, "%d", &value);
    return value;
}

int main(void) {
    puts("Please enter the score.");
    int score = get_input_integer();

    if (score == 100) {
        printf("%s", "***\n");
    } else if (score >= 70) {
        printf("%s", "**\n");
    } else if (score >= 40) {
        printf("%s", "*\n");
    } else {
        printf("%s", "\n");
    }
    
    return 0;
}