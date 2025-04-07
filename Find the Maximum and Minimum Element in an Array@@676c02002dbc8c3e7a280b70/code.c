#include <stdio.h>
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        
        if(arr[i]>0 && arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<0 && arr<max){
            max=arr[i];
        }
        if(arr[i]>0 && arr[i]<min){
            min=arr[i];
        }
        if(arr[i]<0 && arr>min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
}