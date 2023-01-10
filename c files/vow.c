#include <stdio.h>
int main ()
{
    char c;
    printf("Enter the character\n");
    scanf("%c", &c);
    switch(c)
    {
        case 'a': printf("Vowel"); break;
        case 'e': printf("vowel"); break;
        case 'i': printf("vowel"); break;
        case 'o': printf("vowel"); break;
        case 'u': printf("vowel"); break;
        default : printf("Connstant");
    }
    return 0;
}