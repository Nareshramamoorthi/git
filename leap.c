#include <stdio.h>

int main()
{
    int a;
    printf("enter the year: ");
    scanf("%d",&a);
    if(a%4==0){
        printf("The enter year is leap year");
    }
    else{
        printf("The enter year is not an leap year");
    }
    return 0;
}