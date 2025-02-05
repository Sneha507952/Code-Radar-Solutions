#include <stdio.h>
int main(){
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    if (s1==s2 && s2==s3 && s1==s3){
        printf("Equilateral");
    }
    else if(s1!=s2 && s2!=s3 && s3!=s1){
        printf("Scalene");
    }
    else{
        printf("Isoceles");
    }
    return 0;
}