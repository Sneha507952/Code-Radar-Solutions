// void ceaserCipher(message,shift,encrrypted){
//     int size=sizeof(message);
//     for(int i=0;i<size;i++){
//         message[i]=message[i]+(char)3;

//     }
//     printf("")
// }#include <stdio.h>
#include <ctype.h>

void caesarCipher(char *message, int shift, char encrypted) {
    for (int i = 0; message[i] != '\0'; i++) {
        // If the character is lowercase
        if (islower(message[i])) {
            message[i] = ((message[i] - 'a' + shift) % 26 + 26) % 26 + 'a';  // Wrap around within 'a' to 'z'
        }
        // If the character is uppercase
        else if (isupper(message[i])) {
            message[i] = ((message[i] - 'A' + shift) % 26 + 26) % 26 + 'A';  // Wrap around within 'A' to 'Z'
        }
        // Non-alphabet characters remain unchanged
    }
    printf("%s\n", message);
}

// int main() {
//     char message[] = "Hello, World!";  // Input message
//     int shift = 3;  // Shift value for Caesar Cipher

//     printf("Original message: %s\n", message);

//     // Encrypt the message using Caesar Cipher
//     caesarCipherEncrypt(message, shift);

//     return 0;
// }
