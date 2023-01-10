#include <stdio.h>
int main ()
{
    int bp,gross;
    float hra,da,ta;
    printf("Enter the salary\n");
    scanf("%d", &bp);
    hra=bp*0.10;
    ta=bp*0.05;
    da=bp*0.15;
    gross=bp+hra+da+ta;
    printf("The basic salary is %d\n",bp);
    printf("The HRA is %f\n",hra);
    printf("The TA is %f\n",ta);
    printf("The DA is %f\n",da);
    printf("The total salary is %d\n",gross);
    return 0;
}
