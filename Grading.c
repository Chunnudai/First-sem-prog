#include <stdio.h>
int main ()
{
    int a,b,c,d,e,per,sum;
    printf("Enter Marks of subject\n");
    scanf("%d", &a);
    printf("Enter Marks of subject\n");
    scanf("%d", &b);
    printf("Enter Marks of subject\n");
    scanf("%d", &c);
    printf("Enter Marks of subject\n");
    scanf("%d", &d);
    printf("Enter Marks of subject\n");
    scanf("%d", &e);
    sum = a+b+c+d+e;
    per = (sum/500)*100;

    if (per<=30)
    {
        printf("Fail");
    }
    else
    {
        printf("Pass");
    }
    return 0;
}