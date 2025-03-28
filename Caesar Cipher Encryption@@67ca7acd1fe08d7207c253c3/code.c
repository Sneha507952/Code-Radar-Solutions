

#include <stdio.h>
#include <ctype.h>  

void caesarCipher(char message[], int shift) {
    int i = 0;
    
    /
    while (message[i] != '\0') {
        char c = message[i];
        
        
        if (isupper(c)) {
            message[i] = ((c - 'A' + shift) % 26 + 26) % 26 + 'A';
        }
        
        else if (islower(c)) {
            message[i] = ((c - 'a' + shift) % 26 + 26) % 26 + 'a';
        }
        
        i++;
    }
}

