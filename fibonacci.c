
#include <stdio.h>

int main() {
   int a,b=0,c=1;
   printf("enter the input");
   scanf("%d",&a);
   printf("0 1 ");
   for(int i=2;i<10;i++){
       int d=b+c;
       printf("%d ",d);
       b=c;
       c=d;
   }
    return 0;
}