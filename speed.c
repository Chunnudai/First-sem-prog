#include <stdio.h>
int main ()
{
    float m,se,sp,d,h;
    printf("Enter Distance in Kilometers\n");
    scanf("%f",&d);
    printf("Enter time in hours\n");
    scanf("%f",&h);
    m=d*1000;
    se=h*3600;
    sp=m/se;
    printf("The speed is %f m/s\n",sp);
    return 0;
}