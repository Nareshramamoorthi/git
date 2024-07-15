#include <stdio.h>
#include <stdbool.h>

int main() {
    int a;
    bool isPrime = true; // Corrected variable name and initialization

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", a);
    } else {
        printf("%d is not a prime number.\n", a);
    }

    return 0;
}