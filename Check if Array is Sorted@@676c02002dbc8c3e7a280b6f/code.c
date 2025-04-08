#include <stdio.h>
int isSorted(int n,int arrr[n]){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]) return 0;
    
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
  if isSorted(arr,n){
    printf("Sorted");
  }
  else{
    printf("Not Sorted");
  }
}