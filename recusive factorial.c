#include <stdio.h>

int factorial(int a){
    if(a==1||a==0){
        return 1;
    }
    else{
       return a*factorial(a-1);
    }
    }
int main()
{
    int a;
    scanf("%d",&a);
    int fact=factorial(a);
    printf("%d",fact);
    return 0;
}