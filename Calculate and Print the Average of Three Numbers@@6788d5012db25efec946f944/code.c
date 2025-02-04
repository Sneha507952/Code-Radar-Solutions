#include <stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=(a+b+c);
    float avg=sum/3;
    printf("Average: %.2f",avg);
    return 0;
}