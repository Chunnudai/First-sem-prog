#include <stdio.h>
int main ()
{
    int n,i,fact=1,j;
    float sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
       for (j=1; j<=i; j++)
       {
        fact = fact*j;
       }
       sum=sum +(float)i/fact;
    }
    printf("The sum is %f",sum);
    return 0;
}