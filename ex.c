#include <stdio.h>
#include <math.h>
int main ()
{
   int n,a,b,c,d;
printf("Enter the number\n");
scanf("%d", &n);
a=n%10;
d=n/10;
b=d%10;
c=d/10;
if (a*a*a+b*b*b+c*c*c==n)
{
   printf("Entered number is armstrong number");
}
else 
{
   printf("Entered number is not armstrong number");
}
return 0;
}