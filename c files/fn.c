#include <stdio.h>
int main ()
{
    int x,x1,x2,x3,x4;
    printf("ENTer the value for x\n");
    scanf("%d", &x);
    x1 = x*x+2;
    x2 = x*x +2*x;
    x3 = x*x*x + 2*x*2;
    x4 = 0;
    if (x>=0 && x<=10)
    {
        printf("When value of X is taken %d the answer is %d", x,x1);
    
    }
    else if (x>=11 && x<=20)
    {
        printf("When value of X is taken %d the answer is %d", x,x2);

    }
    else if (x>=21 && x<=30)
    {
        printf("When value of X is taken %d the answer is %d", x,x3);
    }
    else if (x>30)
    {
        printf("When value of X is taken %d the answer is %d", x,x4);
    }
    return 0;
}