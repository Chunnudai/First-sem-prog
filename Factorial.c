#include <stdio.h>
int main ()
{
    int n,i,fac;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    i=1;
    fac=1;
    while (i<=n)
    {
        fac = fac *i;
        i++;
    } 
    printf("%d\n",fac);
    return 0;
}