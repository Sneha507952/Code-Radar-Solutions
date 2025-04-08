#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    
    scanf("%d %d", &num1, &num2);
    scanf(" %c", &operator);
    
    
    

    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("error");
                return 1;
            }
            break;
        default:
            printf("error");
            return 1;
    }

    printf("%d", result);
    return 0;
}