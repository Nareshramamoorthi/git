#include <stdio.h>


int sumOfDigits(int a) {
    if (a == 0)
        return 0;
    else
        return (a % 10) + sumOfDigits(a / 10);
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
