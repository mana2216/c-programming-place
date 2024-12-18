/**
 * 0x3c5 * 26 - 0741
 * 
 * 0x3c5
 * => (16^2 * 3) + (16 * 12) + 5 => 768 + 192 + 5 => 965
 * 
 * 0741
 * => (8^2 * 7) + (8 * 4) + 1 => 448 + 32 + 1 => 481
 * 
 * 0x3c5 * 26 - 0741 = 965 * 26 - 481 = 25090 - 481 = 24609
 */

#include <stdio.h>

int main(void) {
    unsigned int hexadecimal = 0x3c5;
    unsigned int octal = 0741;
    unsigned int decimal = 26;

    printf("%u\n", hexadecimal * decimal - octal);
    
    return 0;
}