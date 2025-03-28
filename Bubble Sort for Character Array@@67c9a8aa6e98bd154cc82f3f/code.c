// int bubbleSort(char arr[],int n ){
//     char temp;int swapped=0;
//     for(int i=0;i<n;i++){
        
//         if(arr[i]>arr[i+1]){
//             temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
//             swapped=1;
//         }
//     if(swapped==0){
//         break;
//     }
//     }
    
// }
// void printArray(char arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%c ",arr[i]);
//     }
// }

#include <stdio.h>

void bubbleSort(char arr[], int n) {
    char temp;
    
    // Loop over each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Flag to check if any swap was made in this iteration
        int swapped = 0;
        
        // Loop through the array up to the n-i-1 element (after each iteration, the largest element is placed at the end)
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the characters
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;  // Mark that a swap was made
            }
        }
        
        // If no swap was made, the array is already sorted, so break early
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

