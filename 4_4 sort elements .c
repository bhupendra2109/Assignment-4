#include <stdio.h>
#include <stdlib.h> 
#define SIZE 4

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int matrix[SIZE][SIZE] = {
        {16, 2, 9, 7},
        {1, 12, 5, 10},
        {15, 3, 11, 8},
        {4, 14, 6, 13}
    };
    int singleDimArray[SIZE * SIZE];
    int k = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            singleDimArray[k++] = matrix[i][j];
        }
    }

    qsort(singleDimArray, SIZE * SIZE, sizeof(int), compare);

    printf("Sorted elements in a single dimension array:\n");
    for (int i = 0; i < SIZE * SIZE; i++) {
        printf("%d ", singleDimArray[i]);
    }
    printf("\n");

    return 0;
}