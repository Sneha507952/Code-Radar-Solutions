#include <stdio.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        for(k=j-2;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}