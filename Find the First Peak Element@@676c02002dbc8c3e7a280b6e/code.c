#include <stdio.h>
int peakelement(int n;int arr[n]){
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i+1 && arr[i]>arr[i-1]]){
            return arr[i];
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",peakelement(n,arr));

}