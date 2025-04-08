// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if ((a>0 && b<0)|| (a<0 && b>0)){
//         printf("True");
//     }
//     else{
//         printf("False");
//     }
//     return 0;
// }

#include <stdio.h>

int haveOppositeSigns(int a, int b) {
    return (a < 0 && b > 0) || (a > 0 && b < 0);
}

int main() {
    int num1, num2;
    
    
    scanf("%d %d", &num1, &num2);
    
    if (haveOppositeSigns(num1, num2)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}