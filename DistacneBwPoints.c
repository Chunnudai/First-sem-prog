#include<stdio.h>
#include <math.h>
int main ()
{
    float x1,x2,y1,y2,d;
    printf("Enter value for x1\n");
    scanf("%f", &x1);
    printf("Enter value for x2\n");
    scanf("%f", &x2);
     printf("Enter value for y1\n");
    scanf("%f", &y1);
     printf("Enter value for y2\n");
    scanf("%f", &y2);
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance between two points is %f", d);
    return 0;
}