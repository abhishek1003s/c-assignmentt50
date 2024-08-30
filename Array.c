#include <stdio.h>

int main() {
    // Declare and initialize an array of integers
    int arr[5] = {10, 20, 30, 40, 50};

    // Modify an element in the array
    arr[2] = 100;

    // Traverse and print the array elements
    printf("Elements in the array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Taking input from the user to fill the array
    int userArr[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &userArr[i]);
    }

    // Displaying the user input array
    printf("User entered elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", userArr[i]);
    }
    printf("\n");

    return 0;
}
