#include <stdio.h>
int main ()
{
    int mat[3][3],i,j,sum=0,sum2=0,sum3=0,t[3][3];
    printf("Enter the elements\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("transpose\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i] =mat[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            printf("%d ",t[i][j]);
        }
        printf("\n");
        
    }   
}