#include <stdio.h>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside swapByValue function: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 10, b = 20;
    printf("Before swapByValue: a = %d, b = %d\n", a, b);
    swapByValue(a, b);
    printf("After swapByValue: a = %d, b = %d\n", a, b); 
    return 0;
}