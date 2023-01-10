#include <stdio.h>
int main ()
{
   int a,b,c;
   float avg;
    printf("Enter the value for A\n");
    scanf("%d",&a);
    printf("Enter the value for B\n");
    scanf("%d",&b);
    printf("Enter the value for C\n");
    scanf("%d",&c);
    if (a>25 || b>25 || c>25)
    {
        printf("The maximum marks is 25");
    }
    else
    {
        if (a>b && b>c)
        {
        avg=(a+b)/2;
        printf("The average is %f", avg);
        }
        else if (b>a && c>a)
        {
            avg=(b+c)/2;
            printf("The average is %f", avg);
        }
        else if(a>b && c>a)
        {
            avg=(a+c)/2;
            printf("The average is %f", avg);
        }
    }
}