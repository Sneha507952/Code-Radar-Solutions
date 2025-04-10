// Your code here...
#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int number, bitPosition;
   
    scanf("%d", &number);
   
    scanf("%d", &bitPosition);

    printf("%d",clearNthBit(number, bitPosition));

    return 0;
}