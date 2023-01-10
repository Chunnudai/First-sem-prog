#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    if (n>0)
    {
        printf("Entered the number is Positive");
    }
    else if (n<0)
    {
        printf("Entered number is Negative");
    }
    else if (n==0)
    {
        printf("Entered number is Zero");
    }
    else 
    {
        printf("Enter a valid information");
    }
    return 0;
    
}