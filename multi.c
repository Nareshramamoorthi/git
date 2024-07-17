#include <stdio.h>

int main() {
    int number, i;

    // Input the number for which multiplication table is to be generated
    printf("Enter a number: ");
    scanf("%d", &number);

    // Generate and display multiplication table up to 10
    printf("Multiplication Table for %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
