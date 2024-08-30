#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Decision making using if statement
    if (number > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}
