#include <stdio.h>
#include <math.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int x, n;
    float y = 0;
    int sign = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Enter the value of x (in degrees): ");
    scanf("%d", &x);

    float rad = x * (3.14 / 180); 

    for (int i = 1; i <= 2 * n - 1; i += 2) {
        y += sign * pow(rad, i) / factorial(i);
        sign *= -1;
    }

    printf("Sin(%d) = %.6f\n", x, y);
    return 0;
}
