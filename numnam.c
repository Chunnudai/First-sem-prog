#include <stdio.h>
int main ()
{
    int n,rem=0,r;
    printf("Enter the number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        rem=rem*10+n%10;
        n=n/10;
    }
    while (rem>0)
    {  
        switch(rem%10)
        {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
            default: printf("Not number");
        }
        rem=rem/10;
    }
    return 0;
}