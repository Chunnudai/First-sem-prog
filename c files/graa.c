#include <stdio.h>
int main ()
{
    int a,b,c,d,e,sum;
    float per;;
    printf("Enter the marks for subject\n");
    scanf("%d", &a);
     printf("Enter the marks for subject\n");
    scanf("%d", &b);
 printf("Enter the marks for subject\n");
    scanf("%d", &c);
    printf("Enter the marks for subject\n");
    scanf("%d", &d);
    printf("Enter the marks for subject\n");
    scanf("%d", &e);
    sum = a + b + c + d + e;
    per = 100*sum/500;
    if (per<=30)
    {
        printf("fail");
    }
    else if(per>=30)
    {
        printf("Pass");
    }
    return 0;
}