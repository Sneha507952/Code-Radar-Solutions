#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    if (num == 0) return 32; // If the number is zero, all bits are zeros

    int count = 0;
    while ((num & 1) == 0) { // Check the least significant bit
        count++;
        num >>= 1; // Shift right to check the next bit
    }

    return count;
}

int main() {
    unsigned int number;
   
    scanf("%u", &number);

    printf("%d",countTrailingZeros(number));

    return 0;
}