#include <stdio.h>


  int gcd(int num1, int num2){
      if(num2==0){
          return num1;
      }
      else{
          while(num2!=0&&num1!=0){
              if(num1>num2){
                  num1=num1%num2;
              }
              else{
                  num2=num2%num1;
              }
          }
          return gcd(num2,num1%num2);
      }
  }


int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int result = gcd(a,b);
    printf("%d",result);
  }
