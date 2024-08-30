#include <stdio.h>

int main() {
    int a, b;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Demonstrate relational operators
    printf("a == b: %d\n", a == b);  // Equal to
    printf("a != b: %d\n", a != b);  // Not equal to
    printf("a > b: %d\n", a > b);    // Greater than
    printf("a < b: %d\n", a < b);    // Less than
    printf("a >= b: %d\n", a >= b);  // Greater than or equal to
    printf("a <= b: %d\n", a <= b);  // Less than or equal to

    return 0;
}
