#include <stdio.h>
int main()
{
    float dis,bill,x,n,disc;
    printf("Enter Kg and Cost\n");\
    scanf("%f",&x);
    scanf("%f",&n);
    bill =x*n;
    disc=bill;
    if(bill>=1000 && bill <=2000)
    {
        dis=0.05;
        disc=bill-bill*dis;
    }
    else if (bill>=2000 && bill <=3000)
    {
        dis=0.1;
        disc=bill-bill*dis;
    }
    else if (bill>=3000)
    {
        dis=0.12;
        disc=bill-bill*dis;
    }
    else
    {
        printf("Total bill =%f",bill);
        printf("Discount of=None\n");
    }
     printf("Total bill =%f\n",bill);
        printf("Discount of=%f\n",dis*bill);
        printf("Total amount after discount =%f",disc);
        return 0;
}   