#include <stdio.h>
int fact();
int main ()
{
    int n,f,i;
scanf("%d", &n);
fact(f,i,n);
}
int fact(int f,int i,int n)
{
    f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    printf("The factorial is %d\n", f);
    return f;
}