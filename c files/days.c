#include <stdio.h>
int main()
{
   int y,m,d;
    printf("Enter number of days\n");
    scanf("%d",&d);
    y=d/365;
    d=d-y*365;
    m=d/30;
    d=d-m*30;
    printf("%d years %d months and %d days",y,m,d);
    

   /* int days;
    printf("Enter number of days");
    scanf("%d",&days);
    int y=days/365;
    int drem1=days%365;
    int m=drem1/30;
    int drem2=drem1%30;
    printf("%d years %d months %d days ",y,m,drem2);*/
    
}