#include <stdio.h>
int main ()
{
    int n,i,fact=1,sum=0,num,a,b,c,fact2=1,fact3=1,j,k;
    printf("Enter 3 digit Number\n");
    scanf("%d",&n);
    num=n;
    a=n%10; //5
    n=n/10;//14
    b=n%10;//4
    c=n/10;//1
    for(i=1;i<=a;i++)
    {
        fact = fact *i;
    }
    for(j=1;j<=b;j++)
    {
        fact2 = fact2 *j;
    }
    for(k=1;k<=c;k++)
    {
        fact3 = fact3 *k;
    }
    sum =fact + fact2 +fact3;
    
    if (sum==num)
    {
        printf("Number is strong number\n");
    }
    else 
    {
        printf("Not a strong number");
    }
    return 0;
    

}