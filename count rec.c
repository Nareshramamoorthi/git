#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + countDigits(n / 10);
    }
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Number of digits: 1\n");
    } else {
        printf("Number of digits: %d\n", countDigits(n));
    }
    return 0;
}
