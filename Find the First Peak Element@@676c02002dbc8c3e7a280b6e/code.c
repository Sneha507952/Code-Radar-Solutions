// #include <stdio.h>
// int peakelement(int n;int arr[n]){
//     for(int i=1;i<n;i++){
//         if(arr[i]>arr[i+1 && arr[i]>arr[i-1]]){
//             return arr[i];
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("%d",peakelement(n,arr));

// }

#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 0) return -1;

    for (int i = 0; i < n; i++) {
        if ((i == 0 && arr[i] > arr[i + 1]) || 
            (i == n - 1 && arr[i] > arr[i - 1]) || 
            (i > 0 && i < n - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1])) {
            return arr[i]; // First peak element
        }
    }
    
    return -1; // No peak element found
}

int main() {
    int n;
    
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    if (peak != -1) {
        printf("%d", peak);
    } else {
        printf("-1");
    }

    return 0;
}