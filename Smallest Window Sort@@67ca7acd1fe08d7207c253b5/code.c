#include <stdio.h>

void findSmallestWindow(int arr[], int N) {
    int left = 0, right = N - 1;

    
    while (left < N - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    
    if (left >= right) {
        printf("The array is already sorted!\n");
        return;
    }

    
    int min = arr[left], max = arr[right];
    for (int i = left; i <= right; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    
    while (left > 0 && arr[left - 1] > min) {
        left--;
    }

    
    while (right < N - 1 && arr[right + 1] < max) {
        right++;
    }

    printf("%d %d", left, right);
    printf("%d", right - left + 1);
}

int main() {
    int arr[] = {1, 2, 5, 3, 4, 7, 6, 8};
    int N = sizeof(arr) / sizeof(arr[0]);

    findSmallestWindow(arr, N);

    return 0;
}