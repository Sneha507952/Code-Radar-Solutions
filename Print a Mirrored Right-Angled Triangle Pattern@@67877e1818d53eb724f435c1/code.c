#include <stdio.h>

void printMirroredTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); 
    }
}

int main() {
    int N;
   
    scanf("%d", &N);
    
    printMirroredTriangle(N);
    
    return 0;
}