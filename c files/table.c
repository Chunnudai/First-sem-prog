#include <stdio.h>
void table ();
int main ()
{
    int n;
    printf("Enter the number whose table you want \n");
    scanf("%d", &n);
    table(n);
}
void table (int n)
{
for (int i=1;i<=10;i++)
{
printf("%d\n",i*n);
}
}