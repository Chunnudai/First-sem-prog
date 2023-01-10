#include <stdio.h>
int main ()
{
    int n,bin=0,oct=0,hex=0,j=1,k=1,l=1;
    scanf("%d",&n);
    int i=0;
    int n2=n;
    int n3=n;
    while(n!=0)
    {
        i=n%2;
        bin+=(i*j);
        n=n/2;
        j=j*10;
    }
    while(n2!=0)
    {
        i=n2%8;
        oct+=(i*k);
        n2=n2/8;
        k=k*10;
    }
    while(n3!=0)
    {
        i=n3%16;
        hex+=(i*l);
        n3=n3/16;
        l=l*10;
    }
    printf("Binary = %d \nOcta = %d \nHexa = %d \n",bin,oct,hex);
    return 0;
}