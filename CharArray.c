#include <stdio.h>
#include <string.h>

int main() {
    // Method 1: Direct initialization
    char str1[] = "Hello, World!";
    printf("String 1: %s\n", str1);

    // Method 2: Using strcpy function
    char str2[50];
    strcpy(str2, "Hello, C Programming!");
    printf("String 2: %s\n", str2);

    // Method 3: Character by character initialization
    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("String 3: %s\n", str3);

    // Reading a string from user
    char userStr[50];
    printf("Enter a string: ");
    fgets(userStr, sizeof(userStr), stdin);
    printf("You entered: %s\n", userStr);

    return 0;
}
