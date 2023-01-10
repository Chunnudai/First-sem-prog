#include <stdio.h>
int main ()
{
    int n;
    printf("Enter Your age");
    scanf("%d", &n);
    (n>18)?printf("Eligible for votes"):printf("Not eligible for vote");
    return 0;
}