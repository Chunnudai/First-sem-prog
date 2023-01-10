#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter upto counting\n");
    scanf("%d", &i);
    for(n=0;n<=i;n++)
    {
        printf("%d\n",n);
    }
    return 0;
}