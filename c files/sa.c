#include <stdio.h>
int main()
{
    int n,i,s;
    printf("Enter the number");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<n; i++)
    {
        if(s==n[i])
        {
            printf("%d",i);
            break;
        }
    }
    if(i==n)
    printf("nf");
    
}