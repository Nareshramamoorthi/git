
#include <stdio.h>

int main() {
   int a, b, c;
   printf("enter the first no ");
   scanf("%d",&a);
   printf("enter the second no ");
   scanf("%d",&b);
   printf("enter the third no ");
   scanf("%d",&c);
   if(a>b&&a>c){
       printf("the large no is :%d\n",a);
   }
   else if(b>a&&b>c){
       printf("the large no is :%d\n",b);
   }
   else{
       printf("the large no is :%d\n",c);
   }
    return 0;
}