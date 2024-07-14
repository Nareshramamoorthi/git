
#include <stdio.h>

int main() {
   int a, result=0,remind;
   printf("enter the no");
   scanf("%d",&a);
   while(a!=0){
       int remind=a%10;
       int result=result/10+remind;
       a=a/10;
       printf("%d",result);
   }

    return 0;
}