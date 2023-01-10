#include <stdio.h>
int main ()
{
    int n,i=0,sum=0,avg,num;
    printf("Enter how many numbers will be used\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    while(i<n)
    {
        scanf("%d",&num);
        sum = sum + num;
        i++;
    }
    avg =sum / n;
    printf("%d\n%d",sum,avg);
    return 0;

}