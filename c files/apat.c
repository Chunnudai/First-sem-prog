#include <stdio.h>
int main ()
{
    int n,i,j;
    printf("Enter number\n");
    scanf("%d",&n);
    char c='A';
    for (i=1;i<=n;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("%c",c);
        }
        printf("\n");
        c++;
    }
    }