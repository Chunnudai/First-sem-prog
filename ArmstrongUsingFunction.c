#include <stdio.h>
#include <math.h>
int arm(int);
int main ()
{
 int a,b,n,num;   
    printf("Enter the number which You want to check\n");
    scanf("%d", &n);
    arm(n);
    return 0;
}


int arm(int n)
{
    int a,b,num,arm; 
     num=n;
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    arm =pow(a,3)+pow(b,3)+pow(n,3);
    if (num==arm)
    {
        printf("entered number is armstrong number");
    }
    else
    {
        printf("entered number is not armstrong number");
    }
    return num;
}