// Your code here...
#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n); 
}

int main() {
    int number, bitPosition;
  
    scanf("%d", &number);
   
    scanf("%d", &bitPosition);

    printf("%d",setNthBit(number, bitPosition));

    return 0;
}