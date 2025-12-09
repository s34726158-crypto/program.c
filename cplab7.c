#include <stdio.h>

// Function to print array elements
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to calculate sum of array elements
int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements: ");
    printArray(arr, n);

    int total = sumArray(arr, n);
    printf("Sum of array elements = %d\n", total);

    return 0;
}