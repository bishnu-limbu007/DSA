
#include <stdio.h>
#define MAX 20

int getDigitCount(int n) {
    int count = 0;
    while (n > 0) {
        n = n / 10;
        count++;
    }
    return count;
}

int getMaxDigit(int arr[], int n) {
    int max = arr[0], i;
    for (i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    return getDigitCount(max);
}

void countingSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixSort(int arr[], int n) {
    int maxDigit = getMaxDigit(arr, n);

    for (int exp = 1; maxDigit / exp > 0; exp *= 10)
        countingSort(arr, n, exp);
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before sorting....\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    radixSort(arr, n);

    printf("\nAfter sorting....\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
