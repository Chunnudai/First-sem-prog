#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter value for a\n");
    scanf("%d",&a);
    printf("Enter value for b\n");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d",a);
    printf("%d",b);
}