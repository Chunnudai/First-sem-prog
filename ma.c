#include <stdio.h>
int main ()
{
    float a,b,c,avg;
    printf("Enter the marks for subject1\n");
    scanf("%f", &a);
    printf("Enter the marks for subject2\n");
    scanf("%f", &b);
    printf("Enter the marks for subject3\n");
    scanf("%f", &c);
   if (a>25 || b>25 || c>25 )
    {
        printf("The maximum marks is 25 only");
    }
    else{
   if(a>b && b<c)
   {
    avg = (a+c)/2;
    printf("The average is %f\n", avg);
   }
   else if (b>a && a<c)
   {
    avg = (b+c)/2;
    printf("The average is %f\n", avg);
   }
   else if (a>c && c<b)
   {
    avg = (a+b)/2;
    printf("The average is %f\n",avg);
   }
    }
   


    
}