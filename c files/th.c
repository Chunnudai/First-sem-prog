#include <stdio.h>
int main ()
{
    int a,b,c,e;
    printf("Enter number\n");
    scanf("%d", &e);
    a=e%10;
    e=e/10;
    b=e%10;
    c=e/10;
    printf("The sum of the three digit number is %d", a+b+c);
    return 0;
}