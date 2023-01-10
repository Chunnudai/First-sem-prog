#include <stdio.h>
int main ()
{
    int n,i=1;
    printf("Enter whoese table you want\n");
    scanf("%d",&n);
    do
    {
       printf("%d X %d = %d\n",n,i,n*i);

    } 
    while (i++,i<=10);
    
}