#include <stdio.h>

void convertToBinary(unsigned int num) {
    if (num == 0) {
        printf("0");
        return;
    }

    int bits[32]; 
    int index = 0;

    while (num > 0) {
        bits[index++] = num & 1; 
        num >>= 1; 
    }

    
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main() {
    unsigned int number;
   
    scanf("%u", &number);

   
    convertToBinary(number);
    printf("\n");

    return 0;
}