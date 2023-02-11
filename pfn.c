#include <stdio.h>
int prime();
int main ()
{
    int n;
    printf("Enter the number which You want to check\n");
    scanf("%d", &n);
    prime(n);
    return 0;

}

int prime(n)
{
    int count = 0,i;
    for (i =1;i<=n;i++)
    {
        if (n%i==0)
        {
        count++;
        }
    }
    if (count==2)
    {
        printf("Entered number is prime number");

    }
    else 
    {
        printf("Entered number is not prime number");
    }
    return n;
}