#include <stdio.h>

int main() {
    char ch1 = 'A';
    char ch2 = 'B';
    char ch3 = 'C';

    printf("Character 1: %c\n", ch1);
    printf("Character 2: %c\n", ch2);
    printf("Character 3: %c\n", ch3);

    // Reading a character from user
    char userChar;
    printf("Enter a character: ");
    scanf("%c", &userChar);
    printf("You entered: %c\n", userChar);

    return 0;
}
