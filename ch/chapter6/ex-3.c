#include <stdio.h>

int main(void) {
    puts("Please enter the integer.");
    char buf[80];
    fgets(buf, sizeof(buf), stdin);
    int total_seconds;
    sscanf(buf, "%d", &total_seconds);

    int hour = total_seconds / 60 / 60;
    int minute = total_seconds / 60 % 60;
    int second = total_seconds % 60;

    printf("%d時%d分%d秒\n", hour, minute, second);
    
    return 0;
}