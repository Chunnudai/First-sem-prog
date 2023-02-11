#include <stdio.h>
void indian();
void french();
int main ()
{
    char c;
printf("If you are Indian , press i & if you are french , press f\n");
scanf("%c", &c);
if (c==(int)73 || c==(int)105)
{
indian ();
}
else if (c==(int)70 || c==(int)102)
{
    french ();
}
else 
{
    printf("Enter a valid character");
}
return 0;
}

void indian ()
{
    printf("Namaste");
}
void french ()
{
    printf("Bonjour");
}

