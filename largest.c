
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,i,max;
    printf("enter the no of element : ");
    scanf("%d",&a);
     int arr[a];
     printf("The entered value is %d",a);
    for( i=0;i<a;i++){
     scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<a;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max value is %d",max);
    return 0;
}