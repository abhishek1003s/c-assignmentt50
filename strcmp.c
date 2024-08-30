#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    char str3[] = "Hello";
    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str1, str3);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, result1);
    printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, result2);

    return 0;
}
