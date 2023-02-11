#include <stdio.h>
int sum();
int main ()
{
    int a,b;
    printf("Enter the number for sum\n");
    scanf("%d", &a);
    scanf("%d", &b);
    sum(a,b);
}

int sum (int a,int b)
{
    int sum = 0;
    sum=a+b;
    printf("%d",sum);
}