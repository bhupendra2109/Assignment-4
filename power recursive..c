#include <stdio.h>

double powerRecursive(double base, int exp) {
    if (exp == 0) {
        return 1.0;
    } else if (exp > 0) {
        return base * powerRecursive(base, exp - 1);
    } else { 
        return (1.0 / base) * powerRecursive(base, exp + 1);
    }
}

int main() {
    double a;
    int b;
    printf("Enter base (a): ");
    scanf("%lf", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);
    printf("%.2lf raised to %d (recursive) is: %.2lf\n", a, b, powerRecursive(a, b));
    return 0;
}