#include <stdio.h>
int main ()
{
    int a,b;
    char c;
    printf("Enter the operator which you want to use\nAddition = a\nSubtraction = s\nMultiplication = m\nDivision = d\n");
    scanf("%c", &c);
    printf("Enter two numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    switch (c)
    {
    case 'a' : printf("The sum is %d",a+b);
    break;
    case 's': printf("The subtraction is %d",a-b);
        break;
        case 'm': printf("The Multiplication is %d",a*b);
        break;
        case 'd':   printf("The divison is %d",a/b);
        break;
    }
    return 0;
}
