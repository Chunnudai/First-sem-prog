#include <stdio.h>
int sum();
int main ()
{
    int n;
    printf("Enter the number of elemtes\n");
    scanf("%d", &n);
    sum(n);
    return 0;
}



int sum(n)
{
int arr[n],i,sum=0;
for (i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
    sum =sum + arr[i];
}
printf("%d\n",sum);
return sum;
}