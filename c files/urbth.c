#include <stdio.h>
int main ()
{
    int rate,discount,price;
    int answer;
    printf("Eneter total amount\n");
    scanf("%d", &rate);
    printf("Did they mentioned Urban Thela in Instagram?\nPress 1 if yes and 0 if no\n");
    scanf("%d",&answer);
    if (answer==1 )
    {
    discount=rate*0.10;
    price=rate-discount;
    printf("Total price = %d\n",rate);
    printf("Total discount = %d\n",discount);
    printf("Final price to pay = %d\n",price);
}
else if (answer==0)
{
    printf("Total price = %d\n",rate);
    printf("Total discount = no discount\n");
    printf("Final price to pay = %d\n",rate);
} 
return 0;
}