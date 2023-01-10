#include <stdio.h>
int main ()
{
    int h,m,s;
    printf("Enter seconds\n");
    scanf("%d",&s);
    h=s/3600;
    s=s-h*3600;
    m=s/60;
    s=s-m*60;
    printf("%d hrs %d mins %d secs", h,m,s);
    return 0;
}