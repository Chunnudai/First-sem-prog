#include <stdio.h>
int main ()
{
    int i,j,rows,col,sum=0;
    printf("Enter the number of rows and columns\n");
    scanf("%d",&i);
    scanf("%d",&j);
    int a[i][j];
    for(rows=0;rows<i;rows++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d",&a[rows][col]);
        }
    }
    for (rows=0;rows<i;rows++)
    {
        for (col=0;col<j;col++)
        {
            sum = sum + a[rows][col];
        }
        printf("Sum of elements of %d row in matrix is %d\n",rows,sum);
    }
    return 0;
}