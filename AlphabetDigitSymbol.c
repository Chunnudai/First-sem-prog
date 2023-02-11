#include <stdio.h>
int main ()
{
    char c;
    printf("Press any Key\n");
    scanf("%c", &c);
    if (c>=(int)65 && c<=(int)122)
    {
        printf("Alphabet");
    }
    else if (c>=(int)48 && c<=(int)57)
    {
        printf("Digit");
    }
    else 
    {
        printf("Symbol");
    }
    return 0;
}