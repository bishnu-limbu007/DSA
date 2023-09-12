
#include <stdio.h>

// Function to find the maximum value in the input array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform counting sort
void countingSort(int arr[], int n) {
    int max = findMax(arr, n);
    int count[max + 1]; // Create a counting array to store frequency

    // Initialize the counting array with all zeros
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Count the frequency of each element in the input array
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Reconstruct the sorted array from the counting array
    int index = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countingSort(arr, n);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
