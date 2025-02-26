#include <stdio.h>
int is_prime(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i!=0){
            printf("1");
        }
        else{
            printf("0");
        }

    }
}
int main(){
    is_prime();
    return 0;
}