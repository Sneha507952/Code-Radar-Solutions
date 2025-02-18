#include <stdio.h>
int main() {
   int year;
   scanf("%d", &year);
   if (year%400==0 && year%100!=0 && year%4==0){
    printf("Leap Year")
   }
   else{
    printf("Not a Leap Year")
   }
   return 0;   
}
   
    // if(yr%400==0 || yr%100!=0 && yr%4==0)
    //     printf("It is a leap year\n");
    // else
    //     printf("It is not a leap year\n");

    return 0;