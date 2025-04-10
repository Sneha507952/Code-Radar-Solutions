#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0) return 32; // All bits are zero

    int count = 0;
    unsigned int mask = 1U << 31; // Start from the most significant bit

    while ((num & mask) == 0) {
        count++;
        mask >>= 1;
    }

    return count;
}

int main() {
    unsigned int number;
   
    scanf("%u", &number);

    printf("%d",countLeadingZeros(number));

    return 0;
}