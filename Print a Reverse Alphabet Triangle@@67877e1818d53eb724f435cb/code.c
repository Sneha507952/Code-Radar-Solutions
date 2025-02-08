#include <stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    int alphabet=65;
    for(int i=rows-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("%c",alphabet+j);
        }
        printf("\n");
    }
    return 0;
}