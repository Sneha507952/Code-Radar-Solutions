
#include <stdio.h>

void printAlternatingTriangle(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j % 2);  
        }
        printf("\n");
    }
}

int main() {
    int N;
    
    scanf("%d", &N);
    
    printAlternatingTriangle(N);
    
    return 0;
}

