#include <stdio.h>
#include <math.h>

int main() {
    double num1 = 16.0;
    double num2 = 2.71828;
    double num3 = 100.0;
    double num4 = -5.5;
    double num5 = 45.0;

    // Square root
    printf("Square root of %.2f is %.2f\n", num1, sqrt(num1));

    // Natural logarithm (base e)
    printf("Natural logarithm of %.5f is %.5f\n", num2, log(num2));

    // Power
    printf("%.2f raised to the power of %.2f is %.2f\n", num2, num1, pow(num2, num1));

    // Absolute value
    printf("Absolute value of %.2f is %.2f\n", num4, fabs(num4));

    // Sine (angle in radians)
    printf("Sine of %.2f degrees is %.2f\n", num5, sin(num5 * M_PI / 180.0));

    return 0;
}
