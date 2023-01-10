#include<stdio.h>
int main()
{
float r,h,v;
printf("enter the radius and height of the cone");
scanf("%f%f",&r,&h);
v=(1.0/3.0)*3.14*r*r*h;
printf("the volume of cone is %f",v);
return 0;
}