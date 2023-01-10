#include <stdio.h>
int main ()
{
    int n,sum,i=0;
    printf("Enter the number upto which you want sum\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum = sum +1;
        printf("%d",sum);
    }
}