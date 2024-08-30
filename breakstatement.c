#include <stdio.h>

int main() {
    int i;

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        // If i is 5, break the loop
        if (i == 5) {
            break;
        }
        printf("%d\n", i);
    }

    printf("Loop terminated when i reached %d\n", i);

    return 0;
}
S