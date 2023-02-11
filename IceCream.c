#include <stdio.h>
int main ()
{
    float v,n,r,h,no;
    printf("Enter number of cones\n");
    scanf("%f",&no);
    printf("Enter the radius of cone\n");
    scanf("%f", &r);
    printf("Enter the height of cone\n");
    scanf("%f", &h);
    v=3.14*r*r*h*1/3;
    n=no*v;
    printf("The total volume of ice cream to order is %f" , n);
    return 0;
}