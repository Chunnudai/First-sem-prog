#include <stdio.h>
int main ()
{
    int h,m,d;
    printf("Enter minutes\n");
    scanf("%d",&m);
   d=m/1440;
   m=m%1440;
   h=m/60;
   m=m-h*60;
   printf("%d days %d hours %d minutes",d,h,m);
   return 0;

}