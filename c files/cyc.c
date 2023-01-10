#include <stdio.h>
int main ()
{
    int l,b,peri,n,dis;
    printf("Enter the number of rounds taken by the cyclist \n");
    scanf("%d",&n);
    l=10;
    b=80;
    peri=2*(l+b);
    dis=2*peri;
    printf("The Distance covered by the cyclist is %d", dis);
    return 0;
    }