#include <stdio.h>
#include <math.h>
int main ()
{
    int n,num,i;
    printf("Enter the value for N\n");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Enter positive number");
    }
    else if (n%2==0)
    {
        printf("Enter an odd number");
    }
    else 
    {
        for(i=1 && pow(i,2);i<=n;i=i+2)
        printf("%d", i++);
        
    }
    return 0;
}