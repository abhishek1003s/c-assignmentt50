#include <stdio.h>

int main() {
    char str1[50];
    char str2[50];

    // Reading a string using scanf
    printf("Enter a string (no spaces): ");
    scanf("%s", str1);
    printf("You entered: %s\n", str1);

    // Clearing the input buffer
    while (getchar() != '\n');

    // Reading a string with spaces using fgets
    printf("Enter another string (with spaces): ");
    fgets(str2, sizeof(str2), stdin);
    printf("You entered: %s", str2);

    return 0;
}
