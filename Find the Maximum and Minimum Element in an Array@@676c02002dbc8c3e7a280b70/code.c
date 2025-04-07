#include <stdio.h>
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]>0) max=arr[i];
        else if(arr[i]<max && arr[i]<0) max=arr[i];
        if(arr[i]<min && arr[i]>0) min=arr[i];
        else if(arr[i]>min && arr[i]<0) min=arr[i];
        
    }
    printf("%d %d",min,max);
}