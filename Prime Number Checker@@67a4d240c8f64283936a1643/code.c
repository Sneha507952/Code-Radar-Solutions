#include <stdio.h>
int is_prime(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i!=0){
            return 1;
        }
        else{
            return 0;
        }

    }
}
int main(){
    int result;
    result=is_prime();
    printf(result);
}