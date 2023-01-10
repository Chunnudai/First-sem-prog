#include <stdio.h>
int sum(int a, int b);
int main ()
{
    int a,b,s;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    s=sum(a,b);
    printf("The sum is %d\n", s);
}
int sum(int a, int b)
{
   return a+b;
}