#include <stdio.h>

unsigned int get_input_hexadecimal();

int main(void) {
    unsigned int hex = get_input_hexadecimal();
    printf("%#o\n", hex);
    
    return 0;
}

unsigned int get_input_hexadecimal() {
    puts("Please enter the hexadecimal.");
    char buf[40];
    fgets(buf, sizeof(buf), stdin);
    int hex;
    sscanf(buf, "%x", &hex);
    return hex;
}