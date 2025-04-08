#include <stdio.h>

int isMSBSet(int num) {
    return (num & (1 << 31)) != 0; 
}

int main() {
    int num;
    
   
    scanf("%d", &num);
    
    if (isMSBSet(num)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}