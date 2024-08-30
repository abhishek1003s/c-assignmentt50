#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime = time(NULL);
    char dateString[20];
    strftime(dateString, sizeof(dateString), "%Y-%m-%d", localtime(&currentTime));
    printf("The current date is: %s\n", dateString);
    return 0;
}
