#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, n5, per;
    printf("\nEnter marks out of 100 of subject 1: ");
    scanf("%f", &n1);
    printf("\nEnter marks out of 100 of subject 2: ");
    scanf("%f", &n2);
    printf("\nEnter marks out of 100 of subject 3: ");
    scanf("%f", &n3);
    printf("\nEnter marks out of 100 of subject 4: ");
    scanf("%f", &n4);
    printf("\nEnter marks out of 100 of subject 5: ");
    scanf("%f", &n5);
    per = (n1 + n2 + n3 + n4 + n5) / 5;
    if (per >= 30)
    {
        printf("\nPassed with first division. Percentage is %.2f", per);
    }
    else
     {  
         printf("\nFailed.");
     }
     return 0;
}