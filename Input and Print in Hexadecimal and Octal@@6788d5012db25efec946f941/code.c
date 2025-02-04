#include <stdio.h>
void convert(int num,int base);
int main(){
    int num;
    scanf("%d",&num);
    printf("Hexadecimal: ");
    convert(num,16);
    printf("Octal: ");
    convert(num,8);
    return 0;
}
void convert(int num,int base){
    int rem=num%base;
    if (num==0){
        return 0;
    }
    convert(num/base,base);
    if (rem>10){
        printf("%c",rem-10+'A');
        }
    else{
        printf("%d",rem);
    }
}