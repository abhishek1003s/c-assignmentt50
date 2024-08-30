#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;
    char stringVar[100];

    printf("Enter an integer: ");
    scanf("%d", &integerVar);

    printf("Enter a float: ");
    scanf("%f", &floatVar);

    printf("Enter a character: ");
    scanf(" %c", &charVar); 

    printf("Enter a string: ");
    scanf("%s", stringVar);

    printf("You entered:\n");
    printf("Integer: %d\n", integerVar);
    printf("Float: %.2f\n", floatVar);
    printf("Character: %c\n", charVar);
    printf("String: %s\n", stringVar);

    return 0;
}
