/*write a c program to input lenght and width of rectangle,radius of circle ,side of square and 3 side of triangle to calculate perimeter and area of 
square rectangel and traingle,circumfernce of a circle and area of all 4 figures */
#include <stdio.h>
int perirec(int ,int );
int arearec(int ,int );
int pericirc(int );
int areacirc(int );
int perisq(int );
int areasq(int );
int main()
{
    int l,b,r,s,t1,t2,t3,t4,t5,t6;
    printf("Enter value of lenght&breadth\n");
    scanf("%d%d",&l,&b);
    printf("Enter the radius of the circle\n");
    scanf("%d",&r);
    printf("Enter side of square\n");
    scanf("%d",&s);
    t1=perirec(l,b);
    printf("Perimeter of rectangle =%d\n",t1);
    arearec(l,b);
    t2=arearec(l,b);
    printf("Area of rectangle =%d\n",t2);
    pericirc(r);
    t3=pericirc(r);
    printf("Perimeter of circle =%d\n",t3);
    areacirc(r);
    t4=areacirc(r);
    printf("Area of circle =%d\n",t4);
    perisq(s);
    t5=perisq(s);
    printf("Perimeter of square =%d\n",t5);
    areasq(s);
    t6=areasq(s);
    printf("Area of square =%d",t6);
    
}

int perirec(int l,int b)
{
    int peri=2*(l+b);
    return peri;
}
int arearec(int l,int b)
{
    int area=l*b;
    return area;
}
int pericirc(int r)
{
    int peri=2*3.14*r;
    return peri;
}
int areacirc(int r)
{
    int area = 3.14*r*r;
    return area;
}
int perisq(int s)
{
    int peri = 4*s;
    return peri;
}
int areasq(int s)
{
    int area=s*s;
    return area;
}