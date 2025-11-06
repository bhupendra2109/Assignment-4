#include <stdio.h>

double power(double base, int exp) {
    double result = 1.0;
   if (exp >= 0) {
      for (int i = 0; i < exp; i++) {
         result *= base;
        }
    } else { 
        for (int i = 0; i > exp; i--) {
       result /= base;
        }
    }
    return result;
}

int main() {
    double a;
   int b;
    printf("Enter base (a): ");
   scanf("%lf", &a);
    printf("Enter exponent (b): ");
 
    scanf("%d", &b);
    printf("%.2lf raised to %d is: %.2lf\n", a, b, power(a, b));
    return 0;
}