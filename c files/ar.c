#include <stdio.h>
int main ()
{
    int arr[5],i,n,ch;
    printf("Enter the number\n");
    for (i=0; i<5; i++)
    scanf("%d",&arr[i]);
    scanf("%d",&n);
    for (i=0; i<5; i++)
    {
        if (arr[i]==n)
        {
           ch=1; 
        }
    }
    if (ch==1)
    {
        printf("Found successfully\n");
    }
    else 
    {
        printf("Not found");
    }
        return 0;
}

 