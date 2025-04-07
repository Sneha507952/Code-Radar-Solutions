#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   } 
   int product=n*arr[0];
   for(int i=2;i<n;i++){
      if((n*arr[i]) > product){
        product= n*arr[i];
      }
   }
   printf("%d",product);
}