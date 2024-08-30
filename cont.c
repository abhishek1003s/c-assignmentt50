#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit the loop when i equals 5
        }
        printf("%d\n", i);
    }
    printf("Loop terminated because of break statement.\n");
    return 0;
}
