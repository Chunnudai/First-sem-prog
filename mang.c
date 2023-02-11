#include <stdio.h>
int main ()
{
    int n,weight,rate,carton,price;
    float discount;
    rate=50;
    carton=25;
    printf("Enter the number of cartons purchased\n");
    scanf("%d",&n);
    weight=n*carton;
    rate=weight*rate;
    if(weight>100)
    {
        discount=rate*0.15;
        price= rate-discount;
        printf("Total weight= %d Kg\n",weight);
        printf("Total Price= %d Ruppees\n",rate);
        printf("Total Discount= %f\n",discount);
        printf("Final price after discount= %d\n",price);
    }
    else 
    {
         printf("Total weight= %d\n",weight);
        printf("Total Price= %d\n",rate);
        printf("Total Discount= NO discount\n");
        printf("Final price after discount= %d\n",rate);
    }
    return 0;
}