#include <stdio.h>
int main ()
{
    int n,i,sum=0,num;
    printf("Enter the number\n");
    scanf("%d",&n);
    for (i=1;i<n;i++);
    {
         if (n%i==0)
             {
                sum= sum + i;
             }
    }
        if (sum==n)
        {
            printf("Number is perfect");
        }
        else 
        {
            printf("Entered number is not perfect\n");
        }
    return 0;
    }
  