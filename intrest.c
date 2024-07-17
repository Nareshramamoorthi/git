#include <stdio.h>
#include <ctype.h>

int main() {
    int p,r,t,simpleintrest=0;
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    simpleintrest=(p*r*t)/100;
    printf("%d",simpleintrest);
    return 0;
}
