#include <stdio.h>
int main ()
{
    int n,sum=0,i,ans=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        sum = sum +i;
        ans =ans +sum;
        
    }
    printf("The sum is =%d",ans);
    return 0;
}