#include <stdio.h>
int main ()
{
    char c;
    printf("Enter character\n");
        scanf("%c", &c);
        if (c=='v' || c=='i' || c=='b' || c=='g' || c=='y' || c=='o' || c=='r')
        {
    switch (c)
    {
        
    case 'v':printf ("Violet\n");
        break;
        case 'i':printf ("Indigo\n");
        break;
        case 'b':printf ("Blue\n");
        break;
        case 'g':printf ("Green\n");
        break;
        case 'y':printf ("Yellow\n");
        break;
        case 'o':printf ("Orange\n");
        break;
        case 'r':printf ("Red\n");
        break;
    }     
        

    if (c == 'r' || c == 'g' || c == 'b')
    {
        printf("Primary");
    }
    else 
    {
        printf("Secondary");
    }
   
        }
        else
        {
            printf("Enter the rainbow color first letter\n");
        }
    return 0;
}