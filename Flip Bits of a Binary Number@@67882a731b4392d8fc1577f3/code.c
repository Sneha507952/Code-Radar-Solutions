// Your code here...
#include <stdio.h>

int flipBits(int num) {
    return ~num; 
}

int main() {
    int number;
    
    scanf("%d", &number);

    printf("%d",flipBits(number));

    return 0;
}