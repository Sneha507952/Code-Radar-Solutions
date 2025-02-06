#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int i=1;
    while (i<=N){
        for(int j=1;j<=i;j++){
            printf("* /n");
            i++;
        }
        printf("/n");
    }
    return 0;
}