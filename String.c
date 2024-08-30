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

    return 0;
}
