#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
    printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    printf("Modulus: %d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);

    return 0;
}
