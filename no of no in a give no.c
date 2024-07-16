#include <stdio.h>

int main()
{
    int a,count=0;
    scanf("%d",&a);
    while(a!=0){
        a=a/10;
        count+=1;
    }
    printf("%d",count);
}
