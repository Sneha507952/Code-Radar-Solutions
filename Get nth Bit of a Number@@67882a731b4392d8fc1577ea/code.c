#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;
}

int main() {
    int number, bitPosition;
    
    scanf("%d", &number);
   
    scanf("%d", &bitPosition);

    printf("%d",getNthBit(number, bitPosition));

    return 0;
}