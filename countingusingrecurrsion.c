#include <stdio.h>
int f(int, int);
int main ()
{
    int n,count=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    f(n,count);
}

int f(int n,int count)
{
    
    if (count == n)
    {
         printf("%d ",count);
           return count;
    }
    printf("%d ",count);
    count++;
    f(n,count);
}