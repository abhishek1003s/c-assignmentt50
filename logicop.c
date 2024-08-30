#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Demonstrate logical AND (&&)
    if (a > 0 && b > 0) {
        printf("Both numbers are positive.\n");
    } else {
        printf("At least one number is not positive.\n");
    }

    // Demonstrate logical OR (||)
    if (a > 0 || b > 0) {
        printf("At least one number is positive.\n");
    } else {
        printf("Both numbers are not positive.\n");
    }

    // Demonstrate logical NOT (!)
    if (!(a > 0)) {
        printf("The first number is not positive.\n");
    } else {
        printf("The first number is positive.\n");
    }

    return 0;
}
