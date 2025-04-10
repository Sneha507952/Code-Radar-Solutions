#include <stdio.h>

int getLowestSetBitPosition(int num) {
    if (num == 0) return -1; // No set bits in zero
    return __builtin_ctz(num); // Count trailing zeros
}

int main() {
    int number;
   
    scanf("%d", &number);

    int position = getLowestSetBitPosition(number);
    if (position == -1)
        printf("%d", number);
    else
        printf("%d",position);

    return 0;
}