#include <stdio.h>
int main ()
{
    char a;
    printf("ENter the alphabet\n");
    scanf("%c", &a);
    if (a>=(int)97 && a<=(int)122)
    {
        printf("%c in Upper case is %c", a,a-32);
    }
    else if (a>=(int)65 && a<=(int)90)
    {
        printf("%c in Lower case is %c", a,a+32);
    }
    else 
    {
        printf("Enter an alphabet");
    }
return 0;
}