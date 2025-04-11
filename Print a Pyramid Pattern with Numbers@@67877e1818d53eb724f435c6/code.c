#include <stdio.h>

void printNumberPyramid(int N) {
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n"); 
    }
}

int main() {
    int N;
   
    scanf("%d", &N);
    
    printNumberPyramid(N);
    
    return 0;
}