#include <stdio.h>

void modifyValue(int *x) {
    *x = 100;
}

int main() {
    int a = 10;
    printf("Before function call: %d\n", a);
    modifyValue(&a);
    printf("After function call: %d\n", a);
    return 0;
}
