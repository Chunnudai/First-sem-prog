#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if(n==100)
    {
        printf("Congratulations!!!");
    }
    else
     {
        printf("Better luck next time.");
    }
    return 0;
}