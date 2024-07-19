#include <stdio.h>

void multi(int num1);
int main() {
    int a;

    printf("Enter the number you want to multiply: ");
    scanf("%d", &a);
    multi(a); 
    return 0;
}


void multi(int num1) {
    if (num1 != 0) {
        for (int i = 1; i <= 10; ++i) {
            printf("%d * %d = %d\n", num1, i, num1 * i);
        }
    } else {
        printf("Number is zero.\n");
    }
}
