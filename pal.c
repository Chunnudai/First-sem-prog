#include <stdio.h>
int main ()
{
    int n,num,sum=0,a;
    printf("Enter the number which you want to check for palindrome");
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        a=n%10;
        sum=a+(sum*10);
        n=n/10;
    }
    if (sum==num)
    {
        printf("Number is palindrome");
    }
    else 
    {
        printf("Number is not palindrome");
    }
}