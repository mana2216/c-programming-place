#include <stdio.h>

int get_input_year();

int main(void) {
    puts("Please enter the leap year.");
    int year = get_input_year();

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        puts("Leap year");
    } else {
        puts("Normal year");
    }
    
    return 0;
}

int get_input_year() {
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int year;
    sscanf(buf, "%d", &year);
    return year;
}