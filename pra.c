#include <stdio.h>
void fun(int n ,int m);
int main ()
{
    int n,m;
    printf("enter the number\n");
    scanf("%d%d", &n,&m);
    fun(n,m);
    
}

void fun(int n, int m)
{
    int temp;
    if(n==m)
    {
        printf("The HCF is %d\n",m);
    }
    if (n>m)
    {
        if(n%m==0)
        {
            printf("The HCf is %d\n",m);
        }
        else 
        {
            temp=n%m;
            fun(temp,m);
        }
    }
    else 
    {
          if (n<m)
        {
            if(m%n==0)
            {
                printf("The HCf is %d\n",n);
            }
            else 
            {
                temp=n%m;
                fun(temp,n);
            }
        }
    }
} 

