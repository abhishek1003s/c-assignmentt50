Main.c: 
#include <stdio.h>

void myFunction();

int main() {
    myFunction();
    return 0;
}

Myfunction.c:
void myFunction() {
    printf("Hello from myFunction!\n");
}

how to commile:
gcc main.c myFunction.c -o myProgram

demonstrating the linker error after compile only main.c:
gcc main.c -o myProgram

You will get a linker error because the linker cannot find the definition of myFunction:
undefined reference to `myFunction`


