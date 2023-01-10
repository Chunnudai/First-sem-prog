#include <stdio.h>
int main ()
{
    int num=1,n,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while (num<=n)
    {
        sum = sum+num;
        num++;
    
    }
    printf("%d\n",sum);
    return 0;
}