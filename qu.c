#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c,d,e,f,g,h;
    printf("ENter value for a, b, and c\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    if (d>0)
    {
        e=(-b+sqrt(d)/2*a);
        f=(-b-sqrt(d)/2*a);
        printf("Answer is %d and %d",e,f);
    }
    else if(d==0)
    {
        e=-b/(2*a);
        f=f;
        printf("Answer is %d and %d",e,f);
    }
    else 
    {
        g=-b/(2*a);
        h=sqrt(-d)/(2*a);
        printf("Answer is %de + %dh", g,h);
    }
    return 0;
}