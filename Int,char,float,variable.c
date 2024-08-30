#include <stdio.h>

int main() {
    int integerVar;
    char charVar;
    float floatVar;
    printf("Enter an integer: ");
    scanf("%d", &integerVar);
    printf("Enter a character: ");
    scanf(" %c", &charVar);
    printf("Enter a float: ");
    scanf("%f", &floatVar);
    printf("You entered:\n");
    printf("Integer: %d\n", integerVar);
    printf("Character: %c\n", charVar);
    printf("Float: %.2f\n", floatVar);
    return 0;
}
