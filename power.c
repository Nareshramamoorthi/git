#include <stdio.h>

int main()
{
    int a,b,c=1;
    printf("enter the base value: ");
    scanf("%d",&a);
    printf("enter the power value: ");
    scanf("%d",&b);
    for(int i=0;i<b;i++){
        c*=a;
    }
    printf("%d",c);
    return 0;
}