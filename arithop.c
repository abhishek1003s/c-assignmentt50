#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, quotient, remainder;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    // Display the results
    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Difference: %d - %d = %d\n", num1, num2, difference);
    printf("Product: %d * %d = %d\n", num1, num2, product);
    printf("Quotient: %d / %d = %d\n", num1, num2, quotient);
    printf("Remainder: %d %% %d = %d\n", num1, num2, remainder);

    return 0;
}
