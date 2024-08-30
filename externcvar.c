file1;

#include <stdio.h>
extern int count;
void display() {
    printf("Count: %d\n", count);
}


file2;

#include <stdio.h>
int count = 10;

int main() {
    display();
    return 0;
}

gcc filee1.c file2.c -o output./output

count:10