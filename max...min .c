#include <stdio.h>

void findMinMax(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 0, 9,  7, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxVal, minVal;

    findMinMax(arr, size, &maxVal, &minVal);

    printf("Maximum value in array: %d\n", maxVal);
    printf("Minimum value in array: %d\n", minVal);
    return 0;
}