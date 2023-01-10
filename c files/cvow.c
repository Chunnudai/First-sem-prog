/*Write a C program to count the number of vowels and consonants accepted from the user 
until user enters hash character (#)*/
#include <stdio.h>
int main()
{
    char c;
    int a,b;
    printf("Enter the character\n");
   
    while(c='#')
    {
         scanf("%c",&c);
        if (c>=(int)97 && c<=(int)122)
        {
            if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                a++;
            }
            else 
            {
                b++;
            }
        }

    }
    printf("Vowels =%d\n",a);
    printf(" consonants =%d\n",b);
    return 0;
}