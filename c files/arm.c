#include <stdio.h>
int main ()
{
    int a,b,num,n;
    printf("Enter the number\n");
    scanf("%d",&num);
        a=num%10;
        n=num/10;
        b=n%10;
        n=n/10;
        if(num==a*a*a+b*b*b+n*n*n)
        {
            printf("Entered number is an armstrong number\n");
        }
        else 
        {
            printf("Entered number is not an armstrong number\n");
        }
    return 0;
}