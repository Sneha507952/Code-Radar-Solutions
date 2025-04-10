#include <stdio.h>

void swapUsingXOR(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    
    scanf("%d %d", &x, &y);

   
    swapUsingXOR(&x, &y);
    printf("%d %d", x, y);

    return 0;
}