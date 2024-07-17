#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

 
    a = toupper(a);

    
    if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("It is a vowel.\n");
    } else {
        printf("It is not a vowel.\n");
    }
    
    return 0;
}


