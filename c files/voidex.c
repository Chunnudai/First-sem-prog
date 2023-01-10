#include <stdio.h>
//declaration 
void Hello();
void goodbye();
int main ()
{
Hello(); //call of function
goodbye();
}
void Hello()
{
    printf("Hello\n"); //defining function
}
void goodbye()
{
    printf("Goodbye");
}
