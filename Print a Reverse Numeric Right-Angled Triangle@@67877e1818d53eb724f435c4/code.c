// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>=1;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//     printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
   int i, j, rows;
   
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
