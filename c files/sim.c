#include <stdio.h>
int main ()
{
    float p,r,t,a;
    printf("Enter Principle value\n");
    scanf("%f", &p);
     printf("Enter Rate\n");
    scanf("%f", &r);
     printf("Enter time\n");
    scanf("%f", &t);
    a= (p*r*t)/100;
    printf("The value after %f year of simple interest is %f meters", t,a);
    return 0;
}