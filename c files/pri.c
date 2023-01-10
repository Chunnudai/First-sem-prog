#include <stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the number which You want to check\n");
    scanf("%d", &n);
    for (i=1;i<=n; i++)
    {
      if (n%i==0)
      {
        count++;
      }
    }
    if (count==2)
    {
        printf("Entered Number is prime number");

    }
    else 
    {
        printf("Entered number is not prime number");
    }
}