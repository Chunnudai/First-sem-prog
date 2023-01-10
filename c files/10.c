#include <stdio.h>
int main ()
{
    int n,i;
    printf("Enter the number upto which you want count\n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
       
        printf("%d\n",i++);
    }
    return 0;
}