#include <stdio.h>
void fun(int , int);
int main ()
{

}

void fun(int n, int m)
{
    int temp;
    if (n==m)
    {
        printf("THe HCF is %d\n",m);
    }
    else 
    {
        if(n>m)
        {
            if(n%m==0)
            {
                printf("THe HCF is %d\n",m);
            }
            else 
            {
                temp=n%m;
            }
        }
    }
}