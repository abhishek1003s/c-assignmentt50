#include <stdio.h>

int main() {
    register int counter = 0;

    for (int i = 0; i < 5; i++) {
        counter++;
        printf("Counter: %d\n", counter);
    }

    return 0;
}
