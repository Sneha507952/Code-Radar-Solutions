#include <stdio.h>
int main(){
    int i,space,rows,k=0;
    scanf("%d",&rows);
    for(int i=1;i<=rows-i;++i){
        for(int space=1;space<=rows;++space){
            printf(" ");
        }
        while(k!=2*i-1){
            printf("* ");
            ++k;
        }
        printf("\n");
    }

return 0;
}