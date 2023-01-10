#include <stdio.h>
int main()
{
    char ch;
    int n;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9')
    {
        n = ch - '0';
        printf("%d", n%10);
    }
    else
        printf("Not a digit");
    return 0;
}