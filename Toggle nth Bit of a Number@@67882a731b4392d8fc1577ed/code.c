// Your code here...
#include <stdio.h>

int toggleNthBit(int num, int n) {
    return num ^ (1 << n);
}

int main() {
    int number, bitPosition;
   
    scanf("%d", &number);
    
    scanf("%d", &bitPosition);

    printf("%d",toggleNthBit(number, bitPosition));

    return 0;
}