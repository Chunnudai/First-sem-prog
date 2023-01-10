#include <stdio.h>
int main ()
{
    float a,b,c;
    float avg;
    printf("Enter rating1\n");
    scanf("%f",&a);
    printf("Enter rating2\n");
    scanf("%f",&b);
    printf("Enter rating3\n");
    scanf("%f",&c);
    if (a<=10 && b<=10 && c<=10)
    {
    if(a>b && b<c)
    {
        avg = (a+c)/2;
        

    }
    else if(a>b && b>c)
    {
        avg =(a+b)/2;
        
    }    
    else 
    {
        avg =(c+b)/2;
        
    }
    }
    else 
    {
        printf("Enter number from 1-10 only!\n");
    }
    printf("The average rating is %f\n", avg);
    
     

return 0;
}