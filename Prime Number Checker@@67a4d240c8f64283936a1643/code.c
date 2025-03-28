#include <stdio.h>

int isPrime(int n) {
    
    if (n <= 1) {
        return 0;  
    }
    
    
    if (n == 2) {
        return 1;  
    }
    
    
    if (n % 2 == 0) {
        return 0;  }
    
    
    for (int i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) {
            return 0;  
        }
    }
    
    return 1;  
}

