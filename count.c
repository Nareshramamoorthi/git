#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Count digits using a loop
    while (number != 0) {
        number /= 10; // Remove the last digit
        count++;      // Increment count
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
