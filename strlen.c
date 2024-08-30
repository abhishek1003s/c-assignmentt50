#include <stdio.h>
#include <string.h>

int main() {
    // Define a string
    char str[] = "Hello, World!";
    
    // Calculate the length of the string using strlen
    int length = strlen(str);
    
    // Print the length of the string
    printf("Length of the string \"%s\" is: %d\n", str, length);
    
    return 0;
}
