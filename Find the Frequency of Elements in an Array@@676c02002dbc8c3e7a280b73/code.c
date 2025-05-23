#include <stdio.h>

void findFrequency(int arr[], int n) {
    int visited[n];

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue; 

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; 
            }
    
        }
        printf("%d %d", arr[i], count);
    }
     

int main() {
    int n;
    
    scanf("%d", &n);
    int arr[n], visited[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; 
    }

    findFrequency(arr, n);
    return 0;
}