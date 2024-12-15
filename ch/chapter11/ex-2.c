#include <stdio.h>
#include <string.h>


int get_input_integer();

int main(void) {
    int day = get_input_integer();
    char day_string[100] = {};
    switch (day) {
        case 0:
            strcpy(day_string, "日曜日");
            break;
        case 1:
            strcpy(day_string, "月曜日");
            break;
        case 2:
            strcpy(day_string, "火曜日");
            break;
        case 3:
            strcpy(day_string, "水曜日");
            break;
        case 4:
            strcpy(day_string, "木曜日");
            break;
        case 5:
            strcpy(day_string, "金曜日");
            break;
        case 6:
            strcpy(day_string, "土曜日");
            break;
        default:
            strcpy(day_string, "0~6までの数字を入力してください");
            break;
    }

    printf("%s\n", day_string);
    return 0;
}

int get_input_integer() {
    puts("Please input integer(0~6).");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int val = {};
    sscanf(buf, "%d", &val);
    return val;
}