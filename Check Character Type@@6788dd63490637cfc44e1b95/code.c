#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            printf("Vowel");}
        else{
            printf("Consonant");
        }
}
    else if(ch>=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}