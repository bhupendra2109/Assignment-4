#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS] = {
        {10, 2, 8},
        {5, 1, 9},
        {7, 3, 6}
    };

    int *ptr = &matrix[0][0]; 
    int largest = *ptr;
    int smallest = *ptr;

    for (int i = 0; i < ROWS * COLS; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
        }
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}