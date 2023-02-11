#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n=n%2;
    switch(n)
    {
        case 0: printf("Even");
        break;
       default:printf("Odd");
    return 0;
}
}