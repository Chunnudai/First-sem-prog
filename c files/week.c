#include <stdio.h>
int main ()
{
    int n;
    printf("Enter the number of weekday\n");
    scanf("%d", &n);
    switch (n)
    {
        case 1:printf("Sunday"); 
        break;
        case 2:printf("Monday");
         break;
        case 3:printf("Tuesday");
         break;
        case 4:printf("Wednesday");
         break;
        case 5:printf("Thursday");
         break;
        case 6:printf("Friday");
         break;
        case 7:printf("Saturday");
         break;
    
    }
    return 0;
}