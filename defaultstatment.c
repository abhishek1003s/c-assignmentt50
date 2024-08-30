#include <stdio.h>

int main() {
    int grade;

    // Prompt the user to enter a grade
    printf("Enter a grade (1-5): ");
    scanf("%d", &grade);

    // Decision making using switch statement
    switch (grade) {
        case 1:
            printf("Excellent\n");
            break;
        case 2:
            printf("Very Good\n");
            break;
        case 3:
            printf("Good\n");
            break;
        case 4:
            printf("Average\n");
            break;
        case 5:
            printf("Poor\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

    return 0;
}
