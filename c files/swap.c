#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter Value of A\n");
    scanf("%d", &a);
    printf("Enter Value of B\n");
    scanf("%d", &b);
    printf("Numbers before swapping\nA=%d\nB=%d\n", a,b);
    a= a*b;
    b=a/b;
    a=a/b;
  printf("Numbers after swapping\nA=%d\nB=%d", a,b);
    return 0;
}
