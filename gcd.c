#include <stdio.h>

int main()
{
   int a,b,c=0;
   scanf("%d",&a);
   scanf("%d",&b);
   while(b!=0){
       c=a%b;
       a=b;
       b=c;
   }
   printf("the gcd is : %d",a);
    return 0;
}