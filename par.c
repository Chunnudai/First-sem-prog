#include <stdio.h>
int main ()
{
    int num,n,a,rev=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    num=n;
    while (n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
        
    }
   if (num==rev)
   {
    printf("Palindrom");
   }
   else 
   {
    printf("Not a palindrom");
   }
    
    return 0;
}